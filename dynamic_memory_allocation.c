#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int len;
    char *ptr;
    ptr = (char *)calloc(len, sizeof(char));
    printf("\n********************************* Welcome to ABC pvt. ltd. *********************************\n");
    printf("Employee1\n");
    printf("Enter the length of your employee id:\n");
    scanf("%d", &len);
    printf("Enter your employee id:\n");
    scanf("%s",ptr);
    printf("Employee ID for Employee1 is: %s",ptr);

    printf("\n\nEmployee2\n");
    printf("Enter the length of your employee id:\n");
    scanf("%d", &len);
    printf("Enter your employee id:\n");
    len++;
    ptr = (char *)realloc(ptr, len*sizeof(char));
    scanf("%s",ptr);
    printf("Employee ID for Employee2 is: %s",ptr);

    printf("\n\nEmployee3\n");
    printf("Enter the length of your employee id:\n");
    scanf("%d", &len);
    printf("Enter your employee id:\n");
    len++;
    ptr = (char *)realloc(ptr, len*sizeof(char));
    scanf("%s",ptr);
    printf("Employee ID for Employee3 is: %s",ptr);
}