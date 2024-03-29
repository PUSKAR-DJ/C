/*Basic template of Stack(push and pop)*/
#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int top;
    int size;
    int *arr;
} stack;

void init(stack *p, int size);
void push(stack *p, int item);
int isfull(stack *p);
int pop(stack *p);
int isempty(stack *p);

int main()
{
    stack s1;
    int m,n,x,i;
    printf("Enter the size of the stack: ");
    scanf("%d",&n);//n=20
    init(&s1, n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value you want to push: ");
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        else
        push(&s1,x);
    }
    printf("Enter how many values you want to pop: ");
    scanf("%d",&m);
    printf("Popping the values entered: \n");
    //printf("%d popped from the stack\n",pop(&s1));
    for(i=0;i<m;i++)
    {
        printf("%d is popped\n", pop(&s1));
    }
    return 0;
}

void init(stack *p, int size)
{
    p->top = -1;
    p->size = size;
    p->arr = (int *)malloc(size * sizeof(int));
}

void push(stack *p, int item)
{
    if (isfull(p))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        p->arr[++p->top] = item;
        printf("%d is pushed to stack\n",item);
    }
}

int isfull(stack *p)
{
    return (p->top == p->size - 1);
}

int pop(stack *p)
{
    if (isempty(p))
    {
        printf("Stack Underflow\n");
        return 0;
    }
    else
    {
        return p->arr[p->top--];
    }
}

int isempty(stack *p)
{
    return (p->top == -1);
}