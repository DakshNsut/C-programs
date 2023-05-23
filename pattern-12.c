#include <stdio.h>

// ********************Method 1*******************
int main()
{
    printf("Enter the numnber for the star pattern you want: ");
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n-1; i++)
    {
        // if this for loop after the * one... then space will come after the star.
        for (int j = 0; j <= i; j++)  // same as "else" in  method 2.
        {
            printf(" ");
        }
        for (int j = i; j <= n-1; j++) // same as j>=i in method 2.
        {
            printf("*");
        }

        printf("\n");
    }
}


// ********************Method 2*******************
int main()
{
    printf("Enter the numnber for the star pattern you want: ");
    int n;
    scanf("%d", &n);

    for(int i =0;i<=n-1;i++)
    {
        for (int j = 0; j<=n-1; j++)
        {
            if (j>=i)
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