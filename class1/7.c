// WAP to store numbers in DMA and then sort the numbers stored in DMA in ascending order and display the sorted list
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *p, i, k, n , j, temp;
    printf("How many numbers- ");
    scanf("%d", &k);
    p=(int*)malloc(k*sizeof(int));
    for (i=0;i<k;i++)
        {
            printf("Enter number- ");
            scanf("%d", &n);
            *(p+i)=n;
        }
    for(i=1;i<k;i++)
        {
            for(j=0;j<k-i;j++)
            {
                if (*(p+j)>*(p+j+1))
                    {
                        temp=*(p+j);
                        *(p+j)=*(p+j+1);
                        *(p+j+1)=temp;
                    }
            }
        }
    for(i=0;i<k;i++)
        printf("%d < ",*(p+i));
    return 0;
}
        
