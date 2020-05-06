/* Start post is post 0. */
/* If # posts even, then final post is post 1, else is post 2 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  /*
   for (int x=1; x < (1 << n); x++)
      printf( "%i,%i\n", (x&x-1)%3, ((x|x-1)+1)%3 );
   */

   int n = atoi(argv[1]), x, i, to, fr;

   for (x=1; x < (1 << n); x++) {
      i=x&x-1; fr=(i+i/3)&3;
      i=(x|x-1)+1; to=(i+i/3)&3;
      // printf( "move from pole %i to pole %i.\n", to, fr );
   }
}
