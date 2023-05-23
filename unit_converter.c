#include <stdio.h>

int main()
{
    printf("Welcome to my unit converter.");
    printf("\n\nEnter the value number. ");
    float num;
    scanf("%f", &num);
    printf("Enter the corresponding number.\n1-->Kilometres to Miles.\n2-->Inches to Foot.\n3-->Centimetres to Inches.\n4-->Pounds to Kilograms.\n5-->Inches to Metres.\n");
    int unit;
    scanf("%d", &unit);
    if (unit == 1)
    {
        float Num;
        Num = num * 0.62;
        printf("%f kms = %f miles.", num, Num);
    }
    if (unit == 2)
    {
        float Num;
        Num = num * 0.083;
        printf("%f inches = %f foot.", num, Num);
    }
    if (unit == 3)
    {
        float Num;
        Num = num * 0.393701;
        printf("%f cms = %f inches.", num, Num);
    }
    if (unit == 4)
    {
        float Num;
        Num = num * 0.453592;
        printf("%f pounds = %f kgs.", num, Num);
    }
    if (unit == 5)
    {
        float Num;
        Num = num * 0.0254;
        printf("%f inches = %f metres.", num, Num);
    }
}