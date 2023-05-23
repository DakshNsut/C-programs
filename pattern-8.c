#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int start=0;
    int len=2*n-1,end = len-1;
    // Since size is 2n-1 and 0 to 2n-1-1.
    int arr[len][len];

    while(n!=0){
        for(int i=start;i<=end;i++)
        {
            for(int j=start;j<=end;j++)
            {
                    if (i==start||i==end||j==start||j==end) {
                    arr[i][j]= n;
                    }
            }
        }
        ++start;
        --end;
        --n;
    }

    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}