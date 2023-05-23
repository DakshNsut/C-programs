#include <stdio.h>

int main(){
    printf("Enter: ");
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= 3; i++)
    {
        if(i==1)
        {
            int a =3;
            for (int j = 1; j <=n; j++)
            {
                if(j == a)
                {
                    printf(" * ");
                    a+=4;
                }
                else{
                    printf("   ");
                }
            }
        }

        if (i==2)
        {
            for (int j = 1; j <=n; j++)
            {
                if (j%2==0)
                {
                    printf(" * ");
                }
                else{
                    printf("   ");
                }
            }
        }
        
        if(i==3)
        {
            int a = 1;
            for (int j = 1; j <=n; j++)
            {
                if(j == a)
                {
                    printf(" * ");
                    a+=4;
                }
                else{
                    printf("   ");
                }
            }
        }

        // Second way (inside the outermost loop, instead of what is above)
        /*
        for (int j = 1; j <=n; j++)
        {
            if ((i+j)%4 == 0 || (i==2) && (i+j)%2 ==0)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        */

        printf("\n");
    }

    return 0;
}