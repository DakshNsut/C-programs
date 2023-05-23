#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int comp_points;
int player_points;
char name[7]="Abhinav";

void Round_Result(int c,int p)
{
    if(c==0 && p==0)
    {
        printf("\nComputer choose Rock and %s also choose Rock.\n" ,name);
        printf("DRAW... Nobody gets a point");
    }
    else if(c==0 && p==1)
    {
        printf("\nComputer choose Rock and %s choose Paper.\n",name);
        printf("Paper got teared by Rock... Computer gets a point");
        comp_points++;
    }
    else if(c==0 && p==2)
    {
        printf("\nComputer choose Rock and %s choose Scissors.\n",name);
        printf("Rock broke the Scissors... Computer gets a point");
        comp_points++;
    }
    else if(c==1 && p==0)
    {
        printf("\nComputer choose Paper and %s choose Rock.\n",name);
        printf("Paper got teared by Rock... %s gets a point",name);
        player_points++;
    }
    else if(c==1 && p==1)
    {
        printf("\nComputer choose Paper and %s also choose Paper.\n" ,name);
        printf("DRAW... Nobody gets a point");
    }
    else if(c==1 && p==2)
    {
        printf("\nComputer choose Paper and %s choose Scissors.\n",name);
        printf("Scissors teared the Paper... %s gets a point",name);
        player_points++;
    }
    else if(c==2 && p==0)
    {
        printf("\nComputer choose Scissors and %s choose Rock.\n",name);
        printf("Rock broke the Scissors... %s gets a point",name);
        player_points++;
    }
    else if(c==2 && p==1)
    {
        printf("\nComputer choose Scissors and %s choose Paper.\n",name);
        printf("Scissors teared the Paper... Computer gets a point");
        comp_points++;
    }
    else if(c==2 && p==2)
    {
        printf("\nComputer choose Scissors and %s also choose Scissors.\n" ,name);
        printf("DRAW... Nobody gets a point");
    }
    sleep(5);
}

void game()
{
    for(int i=1;i<4;)
    {
        printf("\n\nRound %d:\n",i);
        printf("Computer's Turn.\n");
        srand(time(NULL));
        int comp_choose = rand()%2;
        printf("%s's Turn.\n",name);
        printf("Enter 0 for Rock.\n      1 for Paper.\n      2 for Scissors.\n");
        int player_choose;
        scanf("%d",&player_choose);
        if(comp_choose!=0 && comp_choose!=1 && comp_choose!=2)
        {
            printf("Invalid input. Please try again.");
            continue;
        }
        else if(player_choose!=0 && player_choose!=1 && player_choose!=2)
        {
            printf("Invalid input. Please try again.");
            continue;
        }
        else
        {
            Round_Result(comp_choose,player_choose);
            i++;
        }
    }
    printf("\n\n********SCORECARD********");
    printf("\n\nComputer scored %d points.\n",comp_points);
    printf("%s scored %d points.\n",name,player_points);
    if(comp_points>player_points)
    {
        printf("Computer wins this game by %d points.",comp_points-player_points);
    }
    else if(comp_points<player_points)
    {
        printf("%s wins this game by %d points.",name,player_points-comp_points);
    }
    else if(comp_points==player_points)
    {
        printf("Both  were competitive enough to win. But,nobody won clearly.");
    }
}

int main()
{
    printf("Welcome to Rock , Paper & Scissors game. You will get three turns. All the Best!!!\n");
    game();
    return 0;
}