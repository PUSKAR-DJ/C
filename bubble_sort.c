//Program to sort the array using binary sort
#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubble_sort(int a[],int size)
{
    int flag,i,j;
    for(i=0;i<size;i++)
    {
        flag=0;
        for(j=0;j<size-i-1;j++)
        {
            flag=1;
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
        if(flag==0)
        break;
    }
}

void display(int a[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

int main()
{
    int a[50],size,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    display(a,size);
    bubble_sort(a,size);
    printf("The array after it is sorted:\n");
    display(a,size);
}