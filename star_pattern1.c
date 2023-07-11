/*User defined star pattern according to the given rows and columns.
For example:- 5*5 *****
                  *****
                  *****
                  *****
                  *****       */
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}