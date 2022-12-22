// WAP to store 10 nos. in a 1-D array. THen print the max and min numbers stored in the array through DMA.
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *p, i, num, inp, max, min;
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
            if(i==0)
            {
                max=*(p+i);
                min=*(p+i);
            }
            else
            {
                if(max<*(p+i))
                max=*(p+i);
                if(min>*(p+i))
                min=*(p+i);
            }
        }
    printf("Max- %d\n", max);
    printf("Min- %d", min);
}
