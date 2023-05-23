#include <stdio.h>

int main()
{
    char name[5000];
    int length;
    printf("Enter the length of your name. ");
    scanf("%d",&length);
    printf("Enter your name. ");
    for (int i = -1; i < length; i++)  // Here 5000 can't be used instead of length otherwise it will go on asking till 5000 times.
    {
        scanf("%c",&name[i]);
    }
    printf("Hello ");
    for (int i = -1; i<length; i++)
    {
        printf("%c",name[i]);
    }
}