#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);

    if (strcmp(argv[1],"add") == 0)
    {
        printf("%d+%d = %d",a,b,a+b);
    }
    else if (strcmp(argv[1],"subtract") == 0)
    {
        printf("%d-%d = %d",a,b,a-b);
    }
    else if (strcmp(argv[1],"multiply") == 0)
    {
        printf("%dX%d = %d",a,b,a*b);
    }
    else if (strcmp(argv[1],"divide") == 0)
    {
        printf("%d/%d = %d",a,b,a/b);
    }

    return 0;
}

// An example command to be given to command line is:
// ./{file_name}.exe add 1 2