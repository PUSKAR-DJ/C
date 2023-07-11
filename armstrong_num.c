//Check whether srmstrong number or not. 1^4+6^4+3^4+4^4=1634
#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,temp,c=0,sum=0,dig=0;
    printf("Enter a number to check it is an Armstrong number or not: ");
    scanf("%d",&n);
    t=temp=n;
    while(temp>0)
    {
        temp=temp/10;
        c++;
    }
    while(t>0)
    {
        dig=t%10;
        sum+=pow(dig,c);
        t=t/10;
    }
    if(sum==n)
    {
        printf("The given value is an Armstrong Number.\n");
    }
    else
    {
        printf("The given value is not an Armstrong Number.\n");
    }
    return 0;
}