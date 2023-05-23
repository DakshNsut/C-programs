#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int average(int a,int b)
{
    return (a+b)/2;
}

int GreetExecute(int (*ptr)(int,int))
{
    printf("Good Morning User.\n");
    printf("The average of 10 and 30 is: %d.",ptr(10,30));
}

int main()
{
    int (*fp)(int,int);
    fp = average;
    GreetExecute(fp);
    return 0;
}