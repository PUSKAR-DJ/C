//Quick Sort Algorithm to program
#include<stdio.h>
void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return(i+1);
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main()
{
    int i,n,A[50];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the numbers for the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    quicksort(A,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}