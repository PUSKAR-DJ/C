/*Tower of Hanoi using recursion. 
   -> One disc at a time.
   -> Cannot place a Larger disk over a smaller disk.
            O         O         O
            O         O         O
            O         O         O
        ____|____ ____|____ ____|____               
            A         B         C                     */

#include<stdio.h>

int tower_of_hanoi(int n,char src,char aux,char dest)
{
    if(n==0)
    {
        return 0;
    }
    tower_of_hanoi(n-1,src,dest,aux);
    printf("Move %d from %c to %c\n",n,src,dest);
    tower_of_hanoi(n-1,aux,src,dest);
}

int main()
{
    int n;
    printf("Enter the number of rings: ");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','B','C');
    return 0;
}