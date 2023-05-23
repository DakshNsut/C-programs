#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    a=b;
    b++;
    printf("%d %d\n",a,b);
    int *i = &a;
    (*i)++;
    printf("%d %d",a,*i);
    return 0;
}