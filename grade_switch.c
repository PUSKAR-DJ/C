//Grade detector using switch-case.
#include<stdio.h>
int main()
{
    int marks;
    printf("Please enter the marks of the student: ");
    scanf("%d",&marks);
    marks=marks/10;
    printf("Result: ");
    switch (marks)
    {
    case 10:
        printf("A");
        break;
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("FAIL!!!");
        break;
    }
    return 0;
}