#include <stdio.h>

int AC,BR;

int multiplication_possibility_check(int x,int y)
{
    if(x!=y)
    {
        printf("\nThis Matrix Multiplication is not possible due to invalid input for no. of columns in Matrix A and no. of rows in Matrix B.\nPlease try again.");
    }

    else
    {
        return 0;
    }
    return 0;
}

void Matrix_creation(int AR,int AC,int BR,int BC)
{
    printf("\nCreating Matrix B...\n");
    int MatrixB[BR][BC];
    for(int i=1;i<=BR;i++)
    {
        for(int j=1;j<=BC;j++)
        {
            printf("Enter the element to be at  row %d and column %d: ",i,j);
            getchar();
            scanf("%d",&MatrixB[i][j]);
            continue;
        }
        continue;
    }

    printf("\nCreating Matrix A...\n");
    int MatrixA[AR][AC];
    for(int i=1;i<=AR;i++)
    {
        for(int j=1;j<=AC;j++)
        {
            printf("Enter the element to be at  row %d and column %d: ",i,j);
            int element;
            getchar();
            scanf("%d",&MatrixA[i][j]);
            continue;
        }
        continue;
    }

    // Creating Matrix AB
    int MatrixAB[AR][BC];
    int element=0;
    for(int i=1;i<=AR;i++)
    {
        for(int j=1;j<=BC;j++)
        {
            for(int k =1;k<=AC;k++)
            {
                element += MatrixA[i][k] * MatrixB[k][j];
                continue;
            }
            MatrixAB[i][j] = element;
            element=0;
            continue;
        }
        element=0;
        continue;
    }

    printf("Matrix A\n");
    for(int i=1;i<=AC;i++)
    {
        printf("|");
        for(int j=1;j<=BR;j++)
        {
            printf(" %d ",MatrixA[i][j]);
            continue;
        }
        printf("|");
        printf("\n");
        continue;
    }

    printf("Matrix B\n");
    for(int i=1;i<=AC;i++)
    {
        printf("|");
        for(int j=1;j<=BR;j++)
        {
            printf(" %d ",MatrixB[i][j]);
            continue;
        }
        printf("|");
        printf("\n");
        continue;
    }

    printf("The matrix multiplication of A and B matrices is:\n");

    for(int i=1;i<=AC;i++)
    {
        printf("|");
        for(int j=1;j<=BR;j++)
        {
            printf(" %d ",MatrixAB[i][j]);
            continue;
        }
        printf("|");
        printf("\n");
        continue;
    }
}

int main()
{
    int A_Rows,A_Columns,B_Rows,B_Columns;
    printf("\n\nWelcome... i will help you to find the matrix product of two matrices A and B.\n");
    printf("Enter the no. of rows in Matrix A: ");
    scanf("%d",&A_Rows);
    printf("Enter the no. of columns in Matrix A: ");
    scanf("%d",&A_Columns);
    printf("Enter the no. of rows in Matrix B: ");
    scanf("%d",&B_Rows);
    printf("Enter the no. of columns in Matrix B: ");
    scanf("%d",&B_Columns);

    multiplication_possibility_check(A_Columns,B_Rows);
    Matrix_creation(A_Rows,A_Columns,B_Rows,B_Columns);
    return 0;
}