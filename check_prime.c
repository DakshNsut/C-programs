#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int InputNum, result = 0;
    printf("Enter the number you want to check it to be a prime number: ");
    scanf("%d", &InputNum);

    for (int i = 2; i != InputNum; i++)
    {
        if (InputNum % i == 0)
        {
            result = 1;
            break;
        }
    }

    if (result == 0)
    {
        printf("It is a prime number.");
    }

    else if (result == 1)
    {
        printf("It is not a prime number.");
    }

}