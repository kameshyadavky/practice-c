#ifndef KY_ARRAY_H

//ifndef is used to check if a unique variable K_ARRAY_H is previously defined or not. If it is not defined following
//code is executed. Otherwise blank file is provided to the module importing it. This type of check prevents double
//declaration of emacs, variables etc.

#define KY_ARRAY_H

typedef struct{
  int size;
  int capacity;
  int *data;
}KyArray;

//returns a pointer which contains data of type K_Array structure
KyArray *KyNewArray(int capacity);

//grabage collection with free()
void RemoveArray(KyArray *kyarray);

void kyarray_push(KyArray *arrptr, int item);

void kyarray_print(KyArray *arrptr);

#endif  //ifndef
