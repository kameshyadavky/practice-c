KyLinkedList *newKyLinkedList(){
  KyLinkedList *kyList = malloc(sizeof(KyLinkedList));

  kyList->head = 0;
  kyList->tail = 0;

  return kyList;
}

void list_destroy(KyLinkedList *kyList) {
  struct SingleNode *current = kyList->head;
  struct SingleNode *next;
  while (current != 0) {
    next = current->next;
    free(current);
    current = next;
  }

  free(kyList);
}



void push_forward(KyLinkedList *kyList, int value) {
  struct SingleNode *head = kyList->head;

  struct SingleNode *node = malloc(sizeof(struct SingleNode));

  node->data = value;
  node->next = head;

  kyList->head = node;

  if (kyList->tail == 0) {
    kyList->tail = node;
  }
}

void display_list(KyLinkedList *kyList) {
  struct SingleNode *current = kyList->head;

  printf("head: %p\n", kyList->head);
  printf("tail: %p\n", kyList->tail);
  printf("path: ");

  while (current != 0) {
    printf("%d -> ", current->data);
    current = current->next;
  }

  printf("\n\n");
}



int ky_list_size(KyLinkedList *kyList) {
  int size = 0;

  struct SingleNode *current = kyList->head;
  while (current != 0) {
    size++;
    current = current->next;
  }

  return size;
}
