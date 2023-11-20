//Merge Sorting Algorithm to Program
#include<stdio.h>
void merge(int *A, int l, int m, int h)
{
    int i=l,j=m+1,k=l;
    int Aux[50];
    while(i<=m && j<=h)
    {
        if(A[i]<A[j])
        Aux[k++]=A[i++];
        else
        Aux[k++]=A[j++];
    }
    while(j<=h)
    Aux[k++]=A[j++];
    while(i<=m)
    Aux[k++]=A[i++];
    for(i=l;i<=h;i++)
    A[i]=Aux[i];
}

int mergesort(int *A, int l, int h)
{
    int m;
    if(l<h)
    {
    m=(h+l)/2;
    mergesort(A,l,m);
    mergesort(A,m+1,h);
    merge(A,l,m,h);
	}
}

int main()
{
    int A[50];
    int n,i,low=0,high;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter the data: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    high=n-1;
    mergesort(A,low,high);
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}