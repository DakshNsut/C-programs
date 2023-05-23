#include <stdio.h>

// ************************ SQUARE PATTERN ************************
int main()
{
    printf("Enter the number for the star pattern you want: ");
    int n;
    scanf("%d", &n);
    for(int i= 1;i<=n;i++)
    {
            for (int j = 1; j <=n; j++)
            {
            if(i==1 || i==n || j==1 || j==n)
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

// ************************ RECTANGULAR PATTERN ************************
int main()
{
    printf("Enter the numnber for the star pattern you want: ");
    int n;
    scanf("%d", &n);
    for(int i= 1;i<=n;i++)
    {
            for (int j = 1; j <=3; j++)
            {
            if(i==1 || i==n || j==1 || j==3)
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