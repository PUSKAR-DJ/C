//Grade detection using if-else statement.
#include<stdio.h>
int main()
{
    int marks;
    printf("Please enter the marks of the student: ");
    scanf("%d",&marks);
    printf("Result: ");
    if(marks>=90)
    {
        printf("A\n");
    }
    else if (marks<90 && marks>=80)
    {
        printf("B\n");
    }
    else if (marks<80 && marks>=70)
    {
        printf("C\n");
    }
    else if (marks<70 && marks>=60)
    {
        printf("D\n");
    }
    else 
    {
        printf("FAIL!!!\n");
    }
    return 0;
}