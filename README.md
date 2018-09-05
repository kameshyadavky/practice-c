# practice-c

Reference guide to my C code and learning. Starting C practice as a aim to clear core IT interview. Part of my daily plan.

## Getting Started

It will be my C guide for interview and continuous progress tab. I will be coding with two main features of C in mind i.e. pointers and structures. Most of the code is divided as header file, .c file implementation and main.c showing usage.

- Pointers
  - pointers hold memory address not value
  - & used to get address of a variable
  - *variable_name used for getting value
  ```
  int a = 5;
  int * p = null;
  //it is required to initialize Pointers

  p = &a;
  *p += 1;
  printf('%d',*p); //as *p gives value and p address
  ```

- structures
  - a structure can hold group of data with same variable name
  ```
  typedef struct {
    int size;
    int capacity;
    int *data;
  } struct_name;
  ```

## Starting the Journey

### General know-to of C

1. `#ifndef` preprocessor: ifndef is used to check if a unique variable K_ARRAY_H is previously defined or not. If it is not defined following code is executed. Otherwise blank file is provided to the module importing it.
   - This type of check prevents double declaration of emacs, variables etc.
   - These are called include guards.

2. Mistakes for a header file: I am not defining functions in header file.(May be wrong so take care)Reason for this decision is that these function do require some extra headers and also I am somewhat not sure.
   - Not applying include guards
   - Header file should act as a public interface. So less information.
   - structure definition and common variables should be here.

### Data Structures

Implementation thoughts...

1. Array: Array is contiguous memory block containing homogeneous element indexed with continuous integer starting from 0.

   - First define a structure which can hold crucial information like start of the array, size currently filled and capacity.
   - make a function which return this structures pointer
   - this function, KyNewArray() allocates memory dynamically to both struct and data i.e. starting address of Array
   - push is performed by calculating address to enter value by: *(arr->data+arr->size) = value    
