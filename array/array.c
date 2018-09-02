//  implement all the functions from array.h

KyArray *KyNewArray(int capacity){
  KyArray *arr = malloc(sizeof(KyArray));

  arr->size = 0;
  arr->capacity = capacity;

//(int *) want value returned by malloc to act as a pointer to int rather than (void *) by default
//data is pointing to starting memory cell of memory area sizeof(int)*capacity
  arr->data = (int *)malloc(sizeof(int)*capacity);

  return arr;
}

void RemoveArray(KyArray *arrptr){
  free(arrptr->data);
  free(arrptr);
}

// used math calculation
void kyarray_push(KyArray *arrptr, int item) {
  //(starting memory cell+ size to which array is filled)
  //size is pointing to first free cell
  *(arrptr->data + arrptr->size) = item;
  ++(arrptr->size);
}


void kyarray_print(KyArray *arrptr) {
  printf("Size: %d\n", arrptr->size);
  printf("Capacity: %d\n", arrptr->capacity);

  printf("Items:\n");
  for (int i = 0; i < arrptr->size; ++i) {
    printf("%d: %d\n", i, *(arrptr->data + i));
  }

  printf("---------\n");
}
