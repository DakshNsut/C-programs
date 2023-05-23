#include <stdio.h>
#include <string.h>

int IsPalindrome(char n[4])
{
    char N[4];
    strcpy(N,n);
    strrev(n);
    if(strcmp(n,N)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    char num[4];
    printf("Enter a number to check if it is a Palindrome or not.\n");
    scanf("%s",&num);

    if(IsPalindrome(num))
    {
        printf("It is a Palindrome.");
    }

    else
    {
        printf("It is not a Palindrome.");
    }
}

// ******************************* without using library*******************************
int IsPalindrome(int n)
{
    int OriginalNum = n;
    int reversed = 0;
    while (n != 0)
    {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }

    if (OriginalNum==reversed)
    {
        return 1;
    }
    return 0;
}

void main()
{
    int num;
    printf("Enter a number to check if it is a Palindrome or not.\n");
    scanf("%d", &num);
    if (IsPalindrome(num))
    {
        printf("It is a Palindrome.");
    }
    else
    {
        printf("It is not a Palindrome.");
    }
}