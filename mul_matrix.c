/*Enter two matrices and multiply them in a separate matrix.*/
#include <stdio.h>
int main()
{
    int a[20][20], b[20][20], c[20][20];
    int i, j, k, r1, c1, r2, c2;
    printf("Enter the number of rows of a matrix A: ");
    scanf("%d", &r1);
    printf("Enter the number of columns of a matrix A: ");
    scanf("%d", &c1);
    printf("Enter the elements of the matrix A:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows of a matrix B: ");
    scanf("%d", &r2);
    printf("Enter the number of columns of a matrix B: ");
    scanf("%d", &c2);
    printf("Enter the elements of the matrix B:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if(c1 == r2)
    {
    printf("Multiplying two matrices....\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < c1; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    printf("Displaying the final multiplication in matrix format:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("Invalid format of one or two matrices, program terminated!");
    }
    return 0;
}