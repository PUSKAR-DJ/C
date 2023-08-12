//Print the alternate digits of the number.
#include<stdio.h>
int main()
{
    int n,rev=0,dig=0,alt=0,count=0;
    printf("Enter a number please: ");
    scanf("%d",&n);
    while (n!=0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    while(rev!=0)
    {
        dig=rev%10;
        count++;
        if(count%2!=0)
        {
            alt=alt*10+dig;
        }
        rev=rev/10;
    }
    printf("The alternate digits of the given number are: %d",alt);
    return 0;
}