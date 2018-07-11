#include <iostream>
#include <vector>
#include <cmath>
#include <string>

int main(int argc, char **argv)
{
  if (argc < 2) {
    std::cout << "usage: " << argv[0] << " <number of disks>" << std::endl;

    return 0;
  }

  size_t
    disks = std::stoi(argv[1]), // number of disks
    steps = std::pow(2, disks) - 1;
  uint8_t 
    tower1[64],
    tower2[64],
    tower3[64];
  uint8_t 
    *ptower1 = tower1,
    *ptower2 = tower2,
    *ptower3 = tower3;

  ptower1[0] = 255;
  ptower2[0] = 255;
  ptower3[0] = 255;

  // stack the initial disks
  for (size_t i=0; i<disks; i++) {
    *(++ptower1) = disks - i;
  }

  for (size_t i=0; i<steps; i++) {
    uint8_t 
      from,
      to,
      value,
      idx = (i + i/3) & 3; // i % 3

    if (idx == 0) { // 101
      from = 3;
      to = 1;

      if (*ptower1 < *ptower3) {
        from = 1;
        to = 3;
      }
    } else if (idx == 1) { // 110
      from = 2;
      to = 1;

      if (*ptower1 < *ptower2) {
        from = 1;
        to = 2;
      }
    } else { // if (idx == 2) { // 011
      from = 3;
      to = 2;

      if (*ptower2 < *ptower3) {
        from = 2;
        to = 3;
      }
    }

    if (from == 1) {
      value = *(ptower1--);
    } else if (from == 2) {
      value = *(ptower2--);
    } else { // if (from == 3) {
      value = *(ptower3--);
    }

    if (to == 1) {
      *(++ptower1) = value;
    } else if (to == 2) {
      *(++ptower2) = value;
    } else { // if (to == 3) {
      *(++ptower3) = value;
    }

    // printf(": %c to %c\n", "ABC"[from - 1], "ABC"[to - 1]);
  }

  return 0;
}
