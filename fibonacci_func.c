//Normal Fibonacci series using function.
#include<stdio.h>
void fibonacci(int range)
{
    int i=0,a=0,b=1,t;
    while(i<range)
    {
    printf("%d\t",b);
    t=a;
    a=b;
    b=t+b;
    i++;
    }
}
int main()
{
    int n;
    printf("Enter the range of fibonacci series: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}