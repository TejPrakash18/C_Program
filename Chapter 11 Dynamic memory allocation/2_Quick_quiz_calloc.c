#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,n;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n,sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("Enter the value of %d ", i);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("The value of %d is %d\n", i, ptr[i]);
    }
}