#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4};
    char s[5];
    for(int i=0;i<4;i++){
        s[i] = '0' + arr[i];
    }
    s[4] = '\0';
    printf("%s",s);
}