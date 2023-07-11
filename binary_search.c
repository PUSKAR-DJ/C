//Program on Binary search ^^Array must be sorted first.
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

void binary_search(int arr[], int size, int item)
{
    int i,LB=0,UB=size-1,mid;
    while(LB<=UB)
    {
        mid=(LB+UB)/2;
        if(arr[mid]==item)
        {
            printf("The element %d is found at position %d in the given array.\n",item,mid+1);
            break;
        }
        else if(arr[mid]>item)
        {
            UB=mid-1;
        }
        else
        {
            LB=mid+1;
        }
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
    int a[50],size,i,item;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,size);
    display(a,size);
    printf("Enter the element you want to search: ");
    scanf("%d",&item);
    binary_search(a,size,item);
}