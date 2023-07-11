//write a program to search and display the odd factors of a number only.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The odd factors for the number are: ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i%2!=0)
            printf("%d\t",i);
        }
    }
    return 0;
}