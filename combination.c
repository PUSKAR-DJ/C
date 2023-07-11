//Calculate, combimation for n number of terms: nCr=n!/(r!*(n-r)!)
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

int main()
{
    int n,r,fn,fr,fnr,C;
    printf("Enter the number of terms for the combination: ");
    scanf("%d",&n);
    printf("Enter the size of the combination: ");
    scanf("%d",&r);
    fn=factorial(n);
    fr=factorial(r);
    fnr=factorial(n-r);
    C=fn/(fr*fnr);
    printf("The combination for %d number of terms is %d.",n,C);
    return 0;
}