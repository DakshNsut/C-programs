#include <stdio.h>

// ***************** Method 1 *****************
int main()
{
    int n;
    printf("Enter the number of which you want the star pattern: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = n-i; k>0 ; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// ***************** Method 2 *****************
int main()
{
    int n;
    printf("Enter the number of which you want the star pattern: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i+j>=n-1)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}