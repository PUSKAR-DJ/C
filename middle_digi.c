//Print the digit at the middle position of the given number.
#include<stdio.h>
int main()
{
    int n,temp,dig=0,count=0,c=0;
    printf("Enter a number please: ");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        count++;
        n=n/10;
    }
    while(temp!=0)
    {
        dig=temp%10;
        if(c==count/2)
        {
            printf("The digit at the middle position of the number is: %d\n",dig);
        }
        c++;
        temp=temp/10;
    }
    return 0;
}