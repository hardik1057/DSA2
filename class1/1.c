// WAP to store numbers in a DMA then display all elements in DMA
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *p, i, num, inp;
    printf("How many numbers- ");
    scanf("%d", &num);
    p=(int*)malloc(num*sizeof(int));
    for(i=0;i<num;i++)
        {
            printf("Enter number- ");
            scanf("%d",&inp);
            *(p+i)=inp;
        }
    for(i=0;i<num;i++)
        {
            printf("%d ",*(p+i));
        }
    return 0;
}
