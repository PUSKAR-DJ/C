#include<stdio.h>
void pow_num(int base, int power)
{
    int i,pow=1;
    for(i=0;i<power;i++)
    {
        pow=pow*base;
    }
    printf("The final value is: %d",pow);
}
int main()
{
    int b,p,pow;
    printf("Enter the number for Base: ");
    scanf("%d",&b);
    printf("Enter the number for Power: ");
    scanf("%d",&p);
    pow_num(b,p);
    return 0;
}