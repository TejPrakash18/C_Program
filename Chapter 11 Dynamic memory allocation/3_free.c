#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr, *ptr2;
    ptr = (int *) malloc( 5 * sizeof(int));

    for(int i=0; i<600; i++)
    {   ptr = (int *)malloc(600000* sizeof(int));
        printf("Enter the value of %d ", i);
        scanf("%d", &ptr[i]);
        // free(ptr2);
    }
    
    for(int i=0; i<5; i++)
    {
        printf("The value of %d is %d\n", i, ptr[i]);
    }
}