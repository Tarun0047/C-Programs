#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void main()
{
	struct node                   //node for user defined
	{
		int num;
		struct node *ptr;              //pointer point nexts variable
	};
	typedef struct node NODE;
	int count=0;
	int choice=1;
	NODE *temp,*head,*last;
	last=0;
	
	while(choice==1)
	{
	temp=(NODE *)malloc(sizeof(NODE));    //SIZE off return size that node will occupy and malloc allocate size and return pointer
	printf("Enter a data\n");
	scanf("%d",&temp->num);
    
	if(last==0)
	{
    	head=last=temp;
	}
	else
	{
	    last->ptr=temp;
	    last=temp;    
	}
	printf("Do u want to continue?Yes(1)/No(0):");
	scanf("%d",&choice);
}

last->ptr=0;
temp=head;

while(temp!=0)
{
	printf("%d => ",temp->num);
	count++;
	temp=temp->ptr;
}
printf("\n");
printf("Number of nodes=%d\n",count);
} 
