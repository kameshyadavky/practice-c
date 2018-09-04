#ifndef KY_LINKED_LIST_H
#define KY_LINKED_LIST_H

struct SingleNode {
  int data;
  struct SingleNode *next;
};

typedef struct{
  struct SingleNode *head;
  struct SingleNode *tail;
}KyLinkedList;

KyLinkedList *newKyLinkedList();
void list_destroy(KyLinkedList *kyList);
void push_forward(KyLinkedList *kyList, int value);
void display_list(KyLinkedList *kyList);
int ky_list_size(KyLinkedList *kyList);


#endif
