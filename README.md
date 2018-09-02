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


### Data Structures
