#include <stdio.h>

int main(){
    printf("Enter: ");
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int a;
        if (i%2 != 0)
        {
            a = 1;
        }
        else
        {
            a = 0;
        }
        for (int j = 1; j <=i; j++)
        {
            if (a==1)
            {
                printf("%d ",a);
                a--;
            }
            else
            {
                printf("%d ",a);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}