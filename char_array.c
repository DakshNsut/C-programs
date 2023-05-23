#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char arr[] = "12345";
    printf("%s",arr);
    arr[1] = '\0';
    printf("%s",arr);
    printf("\n%c\n",arr[0]);
    printf("%c\n",arr[1]);
    printf("%c\n",arr[2]);
    printf("%c\n",arr[3]);
    printf("%c\n",arr[4]);
    return 0;
}