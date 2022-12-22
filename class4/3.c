// WAP to insert a number to a key position in the link list
#include <stdio.h>
#include <stdlib.h>
struct linklist
{
  int no;
  struct linklist *next;
};
typedef struct linklist node;
void create_list(node *lst)
{
  int r;
  printf("How many nos ");
  scanf("%d", &r);
  while (r != 0)
  {
    printf("Enter no ");
    scanf("%d", &lst->no);
    r--;
    if (r == 0)
      break;
    lst->next = (node *)malloc(sizeof(node));
    lst = lst->next;
  }
  lst->next = NULL;
}
void disp(node *lst)
{
  while (lst != NULL)
  {
    printf("%d   ", lst->no);
    lst = lst->next;
  }
}
node *insert(node *head)
{
  node *nw, *lst;
  int key, x;
  printf("\nEnter key no  ");
  scanf("%d", &key);
  printf("Enter no to be inserted ");
  scanf("%d", &x);
  if (head->no == key)
  {
    nw = (node *)malloc(sizeof(node));
    nw->no = x;
    nw->next = head;
    head = nw;
  }
  else
  {
    lst = head;
    while (lst->next != NULL)
    {
      if (lst->next->no == key)
      {
        nw = (node *)malloc(sizeof(node));
        nw->no = x;
        nw->next = lst->next;
        lst->next = nw;
        break;
      }
      lst = lst->next;
    }
  }
  return (head);
}
void main()
{
  node *head;
  head = (node *)malloc(sizeof(node));
  create_list(head);
  printf("\nElemnts Before insert \n");
  disp(head);
  head = insert(head);
  printf("\n\nElemnts after insert\n");
  disp(head);
}