#include <iostream>
#include <vector>
#include <cmath>
#include <string>

std::vector<int>
  tower1,
  tower2,
  tower3;

void move(int from, int to)
{
  int value;

  if (from == 1) {
    value = tower1.back();
    tower1.pop_back();
  } else if (from == 2) {
    value = tower2.back();
    tower2.pop_back();
  } else if (from == 3) {
    value = tower3.back();
    tower3.pop_back();
  }

  if (to == 1) {
    tower1.push_back(value);
  } else if (to == 2) {
    tower2.push_back(value);
  } else if (to == 3) {
    tower3.push_back(value);
  }

  // std::cout << ": " << "ABC"[from - 1] << " to " << "ABC"[to - 1] << std::endl;
}

int main(int argc, char **argv)
{
  if (argc < 2) {
    std::cout << "usage: " << argv[0] << " <number of disks>" << std::endl;

    return 0;
  }

  size_t
    disks = std::stoi(argv[1]), // number of disks
    steps = std::pow(2, disks) - 1;

  // define the bigest value to platform
  tower1.push_back(999);
  tower2.push_back(999);
  tower3.push_back(999);

  // stack the initial disks
  for (size_t i=0; i<disks; i++) {
    tower1.push_back(disks - i);
  }

  for (size_t i=0; i<steps; i++) {
    if ((i % 3) == 0) { // 101
      if (tower1.back() < tower3.back()) {
        move(1, 3);
      } else {
        move(3, 1);
      }
    } else if ((i % 3) == 1) { // 110
      if (tower1.back() < tower2.back()) {
        move(1, 2);
      } else {
        move(2, 1);
      }
    } else if ((i % 3) == 2) { // 011
      if (tower2.back() < tower3.back()) {
        move(2, 3);
      } else {
        move(3, 2);
      }
    }
  }

  return 0;
}
