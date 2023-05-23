#include <stdio.h>

int main(){
    char name[100];
    scanf("%s",&name);
    printf("%s",name);

    char str['\0'];
    gets(str);
    puts(str);
}

// ------------ another way -----------
void main(){
    char str['\0'];
    scanf("%s",&str);
    puts(str);
}