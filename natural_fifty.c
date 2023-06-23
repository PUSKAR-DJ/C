//Sum of first fifty natural numbers.
#include<stdio.h>
int main()
{
    int i,sum=0;
    for (i = 1; i <= 50; i++)
    {
        sum+=i;
    }
    printf("The sum of the first fifty natural numbers: %d",sum);
    return 0;
}