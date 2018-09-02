
#include <stdio.h>   // for IO
#include <stdlib.h>  // for malloc
#include "array.h"
#include "array.c"

int main(int argc, char* argv[]) {
  run_example();

  return 0;
}

void run_example(){
  int capacity = 0;
  printf("Enter how many numbers you want to store:");
  scanf("%d\n",&capacity );

  KyArray *arrptr = KyNewArray(capacity);
  for (int d = 1; d <= capacity; ++d) {
    kyarray_push(arrptr, d);
  }

  kyarray_print(arrptr);
}
