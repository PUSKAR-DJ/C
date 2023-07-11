//Write a program to do Selection Sort
#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selection_sort(int a[],int size)
{
    int i,j,min_index;
    for(i=0;i<size-1;i++)
    {
        min_index=i;
        for(j=i+1;j<size;j++)
        {
            if(a[min_index]>a[j])
            {
                min_index=j;
            }
        }
        swap(&a[i],&a[min_index]);
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
    selection_sort(a,size);
    printf("The array after it is sorted:\n");
    display(a,size);
}