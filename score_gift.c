#include <stdio.h>

int main()
{
    int math;
    printf("Enter 1 if you passed in math otherwise enter 0.  ");
    scanf("%d",&math);
    int science;
    printf("Enter 1 if you passed in science otherwise enter 0.  ");
    scanf("%d",&science);
    if(math ==1 && science==0)
    {
        printf("You got Rs.15 gift.");
    }
    else if(math ==0 && science==1)
    {
        printf("You got Rs.15 gift.");
    }
    else if(math ==1 && science ==1)
    {
        printf("You got Rs.45 gift.");
    }
    return 0;
}