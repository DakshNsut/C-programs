#include <stdio.h>

int Reverse(int n)
{
    int reversed = 0;
    while(n!=0)
    {
        reversed = reversed *10 + n%10;
        n=n/10;
    }
    return reversed;
}

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("The reversed number is %d",Reverse(number));
}