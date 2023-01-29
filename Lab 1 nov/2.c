#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stack {
int top;
unsigned max;
int* array;
};
struct Stack* createStack(unsigned max)
{
    struct Stack* stack
        = (struct Stack*)malloc(
            sizeof(struct Stack));
    stack->max = max;
    stack->top = -1;
    stack->array
        = (int*)malloc(
            stack->max
            * sizeof(int));
    return stack;
}
int isFull(struct Stack* stack)
{
    return stack->top
           == stack->max - 1;
}
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}
void push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}
int pop(struct Stack* stack)
{
  
    if (isEmpty(stack))
        return -1;
    return stack->array[stack->top--];
}
void reverseArray(int a[], int n)
{
    struct Stack* stack = createStack(n);
  
    for (int i = 0; i < n; i++) {
        push(stack, a[i]);
    }
    for (int i = 0; i < n; i++) {
        a[i] = pop(stack);
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
  
    int a[] = {27,32,45,34,39,49,23}; 
    int N = sizeof(a) / sizeof(a[0]);
    printf("Original array \n");
    for(int i=0;i<N;i++)
    printf("%d ",a[i]);
    printf("\nThe reverse of an array \n");
    reverseArray(a, N);
    return 0;
}