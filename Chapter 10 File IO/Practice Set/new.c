#include<stdio.h>
int main()
{   char  f[] = {'fizz'};
    char  b[] = {'buzz'}; 
    char fb[] = {'Fizzbuzz'};
    for(int i=0; i<100; i++)
    {
        if(i%3 == 0 && i%5 == 0)
        {
            printf("%s\n", fb);
        }
        if(i%3 == 0)
        {
            printf("%s\n", f);
        }
        if(i%5 == 0)
        {
            printf("%s\n", b);
        }
        else
        {
            printf("%d", i);
        }
    }
}