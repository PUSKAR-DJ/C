/*Print left angled triangle using "*" */
#include <stdio.h>
int main()
{
    int n;
    int i,j,k;
    printf("Enter the number of rows of your triangle: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (k = n; k > i; k--)
        {
            printf(" ");
        }
        
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
