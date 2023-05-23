#include <stdio.h>

int main()
{
    printf("Enter the numnber for the star pattern you want: ");
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (j >= i)
            {
                printf("%d", i);
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}