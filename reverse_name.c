#include <stdio.h>

int main()
{
    char name[] = "Abhinav";
    int count;
    for (count = 0; name[count] != '\0'; count++){
        continue;
    }

    for (int i = 0; i < (count) / 2 ; i++)
    {
        char temp;
        temp = name[i];
        name[i] = name[count - 1-i];
        name[count - 1-i] = temp;
    }

    printf("%s", name);
}