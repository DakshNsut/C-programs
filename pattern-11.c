#include <stdio.h>

int main(){
    int n;
    printf("Enter the number for the star pattern: ");
    scanf("%d",&n);

    for (int i = 0; i <= n-1; i++)
    {
        for(int j=0; j<= (2*n)-1; j++)
        {
            if (j>=n-1-i && j<=n-1+i)
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