#include <stdio.h>
#include <stdlib.h>
#include <reciprocal.hpp>

int main(int argc, char **argv)
{
  int i;

  i = atoi(argv[1]);
  printf("Reciprocal of %d is %g\n", i, reciprocal(i));

  return 0;  
}
