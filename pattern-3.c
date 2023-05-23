#include <stdio.h>

int main(){
    printf("Enter: ");
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
            for (int j = 1; j <=n-i+1; j++)
            {
                printf(" ");
            }
            
            for (int j = i; j >=2; j--)
            {
                printf("%d",j);
            }

            printf("1");

            for (int j = 2; j <=i; j++)
            {
                printf("%d",j);
            }
       
        printf("\n");
    }
    return 0;
}