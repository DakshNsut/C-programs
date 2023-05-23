#include <stdio.h>

void swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void reverse(int arr[], int n){
    int l = 0;
    int r = n-1;
    while(l < r){
        swap(&arr[l], &arr[r]);
        l++;
        r--;
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int main()
{
    printf("Enter the number you want to know its binary form: ");
    int Number = 0, BinaryNumber = 0;
    int res[100000];

    scanf("%d",&Number);
    int a = Number;
    int x;

    int size = 0;

    if(Number == 0)
    {
        printf("The binary form of entered number is: 0");
    }

    else if(Number == 1)
    {
        printf("The binary form of entered number is: 1");
    }

    else
    {
        int i=0;
        while(a != 0)
        {
            res[i++] = (a % 2);
            a = a / 2;
            size = i;
        }
    }

    reverse(res, size);
    print(res, size);
}