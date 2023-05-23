#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

float EDistance(int x1,int x2,int y1,int y2)
{
    int R;
    R = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return (PI)*pow(R,2);
}

float areaOfCircle(float (*fptr)(int,int,int,int),int x1,int x2,int y1,int y2)
{
    printf("The area of the circle of radius equal to distance of the given two points is: %0.2f",fptr(x1,x2,y1,y2));
}

int main()
{
    int x1,x2,y1,y2;
    printf("Enter the x coordinate of first point: ");
    scanf("%d",&x1);
    printf("Enter the y coordinate of first point: ");
    getchar();
    scanf("%d",&y1);
    printf("Enter the x coordinate of second point: ");
    getchar();
    scanf("%d",&x2);
    printf("Enter the y coordinate of second point: ");
    getchar();
    scanf("%d",&y2);

    float (*fp)(int,int,int,int);
    fp = EDistance;
    areaOfCircle(fp,x1,y1,x2,y2);
}