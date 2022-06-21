#include<stdio.h>
int main()
{   char  f[] = "fizz";
    char  b[] = "Buzz" ;
    char fb[] = "Fizzbuzz";
    for(int i=1; i<100; i++)
    {
        if(i%3 == 0 && i%5 == 0)
        {
            printf("%s\n", fb);
            continue;
        }
        if(i%3 == 0)
        {
            printf("%s\n", f);
            continue;
        }
        if(i%5 == 0)
        {
            printf("%s\n", b);
            continue;
        }
        else
        {
            printf("%d\n", i);
            continue;
        }
    }
}