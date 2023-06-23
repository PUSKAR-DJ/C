/*Mr. Anupam Ghosh is an employee os a private company. His basic salary is Rs. 8000, 
the Dearness allowence os 74% of his basic salary and house rent allowence is 15% of his basic salary. 
Write a program to calculate the gross total salary*/
#include<stdio.h>
int main()
{
    float b,d,h,g;/*b=Basic Salary
                    d=Dearness Allowence
                    h=House Rent Allowence
                    g=Total Gross Salary*/
    printf(":::::TCS selfservice portal:::::\n");
    printf("Hello Mr. Anupam Ghosh :-)\n");
    printf("Please enter your basic salary to generate your gross salary: ");
    scanf("%f",&b);
    d=(74*b)/100;
    h=(15*b)/100;
    g=b+d+h;
    printf("The salary breakdown:\n");
    printf("Basic Salary= %f\nDearness Allowence(D.A)=%f\nHouse Rent Allowence(H.R.A)=%f\nTotal Gross Salary=%f\n",b,d,h,g);
    return 0;
}