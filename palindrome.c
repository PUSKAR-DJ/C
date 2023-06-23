/*Find the sum of digits, number of digits, reverse and check the given number is Palindrome or not.*/
#include<stdio.h>
int main()
{
    int n,dig,sum=0,count=0,rev=0,temp;
    printf("Enter a digit to verify it is Palindrome or not: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        dig=temp%10;
        rev=rev*10+dig;
        sum+=dig;
        temp=temp/10;
        count++;
    }
    printf("The sum of the Digits= %d, The number of Digits= %d, The reverse number= %d, ",sum,count,rev);
    if(n==rev)
    {
        printf("The number is Palindrome.\n");
    }
    else
    {
        printf("The number is not Palindrome.\n");
    }
    return 0;
}