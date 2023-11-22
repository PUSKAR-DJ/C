//Not Working(Segmentation fault) //Counting Sort
#include<stdio.h>
void counting_sort(int *A,int Amax,int n)
{
    int i,C[Amax],B[n];
    for(i=0;i<Amax;i++)
    {
        C[i]=0;
    }   
    for(i=0;i<n;i++)
    {
        C[A[i]]=C[A[i]]+1;
    }
    for(i=1;i<Amax;i++)
    {
        B[C[A[i]]]=A[i];
        C[A[i]]=C[A[i]]-1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",B[i]);
    }
}

int main()
{
    int A[50];
    int n,i,max;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of your array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the highest element in your array: ");
    scanf("%d",&max);
    counting_sort(A,max,n);
    return 0;
}