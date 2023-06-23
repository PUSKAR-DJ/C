//Enter random fifty digits and add them in even and odd sums.
#include<stdio.h>
int main()
{
    int i,n,esum=0,osum=0;
    printf("Enter any 50 integers one by one: ");
    for(i=0;i<50;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            esum=esum+n;
        }
        else
        {
            osum=osum+n;
        }
    }
    printf("The sum of even integers: %d\n",esum);
    printf("The sum of odd integers: %d\n",osum);
    return 0;
}