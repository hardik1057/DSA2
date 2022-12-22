// WAP to insert a number at the end of circular link list
#include <stdio.h>
#include <stdlib.h>
struct linklist
{
  int no;
  struct linklist *next;
};
typedef struct linklist node;
void create_list(node *head)
{
  int r;
  node *nw, *lst;
  printf("How many nos- ");
  scanf("%d", &r);
  lst = head;
  while (r != 0)
  {
    printf("Enter no- ");
    scanf("%d", &lst->no);
    r--;
    if (r == 0)
      break;
    lst->next = (node *)malloc(sizeof(node));
    lst = lst->next;
  }
  lst->next = head;
}
void disp(node *head)
{
  node *p, *q;
  p = NULL;
  q = head;
  while (p != q)
  {
    printf("%d ", q->no);
    q = q->next;
    p = head;
  }
}
void insert_last(node *head)
{
  node *lst, *nw;
  int x;
  printf("\nEnter no to be inserted- ");
  scanf("%d", &x);
  nw = (node *)malloc(sizeof(node));
  nw->no = x;
  nw->next = head;
  lst = head;
  while (lst->next != head)
    lst = lst->next;
  lst->next = nw;
}
void main()
{
  node *head;
  head = (node *)malloc(sizeof(node));
  create_list(head);
  printf("Elements before insert- ");
  disp(head);
  insert_last(head);
  printf("Elements after insert- ");
  disp(head);
}