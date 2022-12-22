// WAP to delete a number from the end of a circular linked list
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
node *del_end(node *head)
{
  node *lst, *nw;
  if (head->next == head)
  {
    nw = head;
    free(nw);
    head = NULL;
  }
  else
  {
    lst = head;
    while (lst->next->next != head)
      lst = lst->next;
    nw = lst->next;
    lst->next = head;
    free(nw);
  }
  return (head);
}
void main()
{
  node *head;
  head = (node *)malloc(sizeof(node));
  create_list(head);
  printf("Elements before deletion- ");
  disp(head);
  head = del_end(head);
  printf("\nElements after deletion- ");
  disp(head);
}