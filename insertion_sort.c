//Write a program to do Insertion Sort
#include<stdio.h>
void insertion_sort(int a[],int size)
{
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&key<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
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
    insertion_sort(a,size);
    printf("The array after it is sorted:\n");
    display(a,size);
}