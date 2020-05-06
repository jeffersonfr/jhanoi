#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
	long long n = atoll(argv[1]); // number of disks

	const char *array[] = {
		"\x01\x00\x01""AC\0CA\0",
		"\x01\x01\x00""AB\0BA\0",
		"\x00\x01\x01""BC\0CB\0"
	};

	n = pow(2, n) - 1;

	int s = -1;

	const char *str;
  const char *ptr;

	for (int i=0; i<n; i++) {
		int index = (i + i/3) & 3; // i%3;
		
    ptr = array[index];

    (index) or (s = -s);
		
		str = ((s > 0 and !ptr[0]) or (s < 0 and !ptr[2]))?(ptr + 6):(ptr + 3);
		
		// puts(str);
	}

	return 0;
}

