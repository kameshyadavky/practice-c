#include <assert.h>
void test_push(){
  KyLinkedList *tester = newKyLinkedList();
  assert(ky_list_size(tester) == 0);

  push_forward(tester, 6);
  assert(ky_list_size(tester) == 1);

  push_forward(tester, 1);

  push_forward(tester, 3);

  display_list(tester);
  list_destroy(tester);
}
