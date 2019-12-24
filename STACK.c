#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<stdlib.h>

struct ArrayStack
{
	int top;
	int capacity;
	int *array;
};
struct ArrayStack*createStack(int cap)                 //arraystack is returntype  //* is for address return
{
	struct ArrayStack *stack;                          //stacks points to array stack type
	stack=malloc(sizeof(struct ArrayStack));          //return sizeof arraystack and assign the address on the stack pointer i.e 6bytes
	stack->capacity=cap;                               //if pointer points to structure then how it points i.e it points through this pointer
	stack->top=-1;
	stack->array=malloc(sizeof(int)*stack->capacity);         //created array of 2bytes per block  //blocks are 4
	return (stack);
};

int isFull(struct ArrayStack *stack)                   //pointer has address of stack
{
	if(stack->top==stack->capacity-1)
	return(1);
	else
	return(0);
}
int isEmpty(struct ArrayStack *stack)
{
	if(stack->top==-1)
	return(1);
	else
	return(0);
}
void push(struct ArrayStack *stack,int item)
{
	if(!isFull(stack))
	{
		stack->top++;
		stack->array[stack->top]=item;
	}
}
int pop(struct ArrayStack *stack)                        //the value we are removing is returning
{
	int item;
	if(!isEmpty(stack))
	{
		item=stack->array[stack->top];
		stack->top--;
		return(item);
	}
	return(-1);                                         //indicate stack is already empty
}
main()
{
	int choice,item;
	struct ArrayStack *stack;
	stack=createStack(4);
	while(1){
	system("cls");
	printf("\n1 PUSH");
	printf("\n2 POP");
	printf("\n3 EXIT");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter a number:");
			scanf("%d",&item);
			push(stack,item);
			break;
		case 2:
			item=pop(stack);
			if (item==-1)
				printf("Stack Empty");
			else
			 printf("Pooped value is %d",item);
		    break;
		case 3:
		    exit(0);
	}
	getch();
	}
}
