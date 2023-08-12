//Sum of even digits of the entered number.
#include<stdio.h>
int main()
{
    int n,dig=0,sum=0;
    printf("Enter a number please: ");
    scanf("%d",&n);
    while (n!=0)
    {
        dig=n%10;
        if(dig%2==0)
        {
            sum=sum+dig;
        }
        n=n/10;
    }
    printf("The sum of even digits of the given number is: %d",sum);
    return 0;
}