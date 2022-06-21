#include<stdio.h>
int main(){
    int n , sum=0;
    printf("Enter the last nmber to sum");
    scanf("%d",&n);
    //for(int i=1; i<num ; i++){
      //  sum = sum+num;
    //}
    sum = (n*n +n)/2;
    printf("Sum of %d Number %d",n,sum);
    return 0;
}