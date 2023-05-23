#include <stdio.h>
#include <stdlib.h>

int i=1;  // external variable

int main()
{
    int i=2;            // local variable
    printf("%d\n", i);  // print local variable i==2

    {
        extern int i;       // point to external variable
        printf("%d\n", i);  // print external variable i==1
    }

    return 0;
}