//To check whether the number is Krishnamurthy number or not!
#include<stdio.h>
int factorial(int num)
{
    int i,mul=1;
    for(i=1;i<=num;i++)
    {
        mul=mul*i;
    }
    return mul;
}

int krishnamurthy(int n)
{
    int dig,f,sum=0;
    while (n>0)
    {
        dig=n%10;
        f=factorial(dig);
        sum+=f;
        n=n/10;
    }
    return(sum);
}

int main()
{
    int n,k;
    printf("Enter a value to check: ");
    scanf("%d",&n);
    k=krishnamurthy(n);
    if(k==n)
    {
        printf("The given number is a krishnamurthy number.");
    }
    else
    {
        printf("The given number is not a krishnamurthy number.");
    }
    return 0;
}