#include <stdio.h>

int IsPrime(int num)
{
    for (int j = 2; j*j <= num; j++)
    {
        if (num % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b;
    printf("Enter the start limit of the range: ");
    scanf("%d", &a);
    printf("Enter the end limit of the range: ");
    scanf("%d", &b);

    printf("The prime numbers between %d and %d including both of them are: ", a, b);
    for (int i = a; i <= b; i++)
    {
        if (IsPrime(i))
        {
            printf("%d ", i);
        }
        else
        {
            continue;
        }
    }
}