#include <stdio.h>
#include <string.h>

char main(){
    char name2[100],name1[100];
    printf("Enter your name: ");
    gets(name1);
    printf("Enter your friend's name: ");
    gets(name2);
    char str[]=  " is a friend of ";
    char Str[100];
    strcpy(Str,strcat(name1, str));
    puts(strcat(Str,name2));
}