// WAP to create a circular link list and then print the list
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
void main()
{
  node *head;
  head = (node *)malloc(sizeof(node));
  create_list(head);
  printf("Elements are- ");
  disp(head);
}