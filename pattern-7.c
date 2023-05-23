#include <stdio.h>

char triang_pattern(int n,int num){
    char arr[num];
    for(int i=0;i<num;i++){
        arr[i]='*';
    }
    printf("\n");
    for(int j=1;j<=num;j++){
        for(int i=0;i<j;i++){
            printf("%c",arr[i]);
            continue;
        }
        printf("\n");
    }
    return 0;
}

char reversed_triang_pattern(int n, int num){
    char arr[num];
    for(int i=0;i<num;i++){
        arr[i]='*';
    }
    printf("\n");
    for(int j=num;j>=0;j--){
        for(int i=0;i<j;i++){
            printf("%c",arr[i]);
            continue;
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    printf("Enter the number of stars you want to print:\n");
    int num;
    scanf("%d",&num);
    printf("Enter 1 for Triangular Star Pattern or -1 for Reversed Triangular Star Pattern:\n");
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("%c",triang_pattern(n,num));
    }
    if(n==-1){
        printf("%c",reversed_triang_pattern(n,num));
    }
    return 0;
}