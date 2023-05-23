#include <stdio.h>
#include <string.h>

struct driver
{
    char name[1000];
    char license_no[1000];
    char route[1000];
    int Kms_driven;
}d1,d2,d3;

int input()
{
    printf("Hello Driver1\n");
    printf("Enter your name: ");
    gets(d1.name);
    printf("Enter your driving license number: ");
    scanf("%d",&d1.license_no);
    getchar();
    printf("Enter your route: ");
    gets(d1.route);
    printf("Enter distance driven in kilometres: ");
    scanf("%d",&d1.Kms_driven);
    getchar();

    printf("\nHello Driver2\n");
    printf("Enter your name: ");
    gets(d2.name);
    printf("Enter your driving license number: ");
    scanf("%d",&d2.license_no);
    getchar();
    printf("Enter your route: ");
    gets(d2.route);
    printf("Enter distance driven in kilometres: ");
    scanf("%d",&d2.Kms_driven);
    getchar();

    printf("\nHello Driver3\n");
    printf("Enter your name: ");
    gets(d3.name);
    printf("Enter your driving license number: ");
    scanf("%d",&d3.license_no);
    getchar();
    printf("Enter your route: ");
    gets(d3.route);
    printf("Enter distance driven in kilometres: ");
    scanf("%d",&d3.Kms_driven);
    getchar();
}

int output()
{
    printf("\nDetails for Driver1 are as follows:\n");
    printf("Name: %s\n",d1.name);
    printf("Driving license number: %d\n",d1.license_no);
    printf("Route: %s\n",d1.route);
    printf("Distance driven in kilometres: %d\n",d1.Kms_driven);

    printf("\nDetails for Driver2 are as follows:\n");
    printf("Name: %s\n",d2.name);
    printf("Driving license number: %d\n",d2.license_no);
    printf("Route: %s\n",d2.route);
    printf("Distance driven in kilometres: %d\n",d2.Kms_driven);

    printf("\nDetails for Driver3 are as follows:\n");
    printf("Name: %s\n",d3.name);
    printf("Driving license number: %d\n",d3.license_no);
    printf("Route: %s\n",d3.route);
    printf("Distance driven in kilometres: %d\n",d3.Kms_driven);
}

int main()
{
    input();
    output();
    return 0;
}