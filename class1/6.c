//WAP to store numbers in DMA and search for a particular number.
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *p,n,num,l,flag=0;
    printf("Enter length of array : ");
    scanf("%d", &l);
    p=(int*)malloc(l*sizeof(int));
    printf("Enter numbers into the array :");
    for(int i=0;i<l;i++)
        {
            scanf("%d",&n);
            *(p+i)=n;
        }
    printf("Enter number to be searched for : ");
    scanf("%d",&num);
    for(int i=0;i<l;i++)
        {
            if(*(p+i)==num)
                {
                    flag=1;
                    printf("%d found in array",num);
                    break;
                }
        }
    if (flag==0)
        printf("%d not found in array",num);
    return 0;
}
