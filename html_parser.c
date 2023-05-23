#include <stdio.h>
#include <string.h>

// removes trailing spaces
void space(char STR[],int len)
{
    int a,b;
    for(int i=0;i<len;i++)
    {
        if(STR[i] == ' ')
        {
            continue;
        }
        else
        {
            a = i;
            break;
        }
    }
    for(int i=-1;i<(-len);i--)
    {
        if(STR[i] == ' ')
        {
            continue;
        }
        else
        {
            b = i;
            break;
        }
    }
    for(int j=0;j<=b;j++,a++)
    {
        STR[j] = STR[a];
        continue;
    }
    printf("after space() function call:\n %s\n", STR);
}

// Removes HTML tags
int parser(char Str[])
{
    int len = strlen(Str);
    for(int i=0;i<len;i++)
    {
        if(Str[i] == '<')
        {
            Str[i] = ' ';
            for(int j=i;j<len;j++)
            {
                if(Str[j] == '>')
                {
                    Str[j] = ' ';
                    for(int k=i+1;k<j;k++)
                    {
                        Str[k] = ' ';
                    }
                    goto next;
                }
                else
                {
                    continue;
                }
            }
        }
        else
        {
            next:
            continue;
        }
    }
}

int main()
{
    char str[1000] = "<h1> This is a heading </h1>";
    printf("%s\n", str);
    parser(str);
    printf("before space() function call:\n %s\n", str);
    space(str,strlen(str));
    return 0;
}