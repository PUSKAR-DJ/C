/*Enter a matrix to transpose it and display it in matrix format.*/
#include <stdio.h>
int main()
{
    int a[20][20], t[20][20];
    int i, j, r, c;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
     printf("Displaying the original matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transposing the matrix....\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            t[i][j] = 0;
            t[i][j] = a[j][i];
        }
    }
    printf("Displaying the final transposition in matrix format:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}