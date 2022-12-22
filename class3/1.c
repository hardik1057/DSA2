// WAP to store some numbers in a link list and then display all the elements of the list
#include <stdio.h>
#include <stdlib.h>
struct linklist
{
  int no;
  struct linklist *next;
};
typedef struct linklist node; // yaha pe typedef use kar rhe struct linklist ko node(user defined name) se define karne k liye
void create_list(node *lst)
{
  int r;
  printf("How many numbers- ");
  scanf("%d", &r);
  while (r != 0)
  {
    printf("Enter number-");
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
int main()
{
  node *head;
  head = (node *)malloc(sizeof(node));
  create_list(head);
  disp(head);
}