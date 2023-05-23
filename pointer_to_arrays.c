#include <stdio.h>
#include <string.h>

char main()
{
    int arr[4] = {1,2,3,4};
    int* ptr = arr;
    printf("The value of *(arr) is: %d.\n",*(arr));
    printf("The value of *(ptr+0)is: %d.",*(ptr+0));
    return '\0';
}