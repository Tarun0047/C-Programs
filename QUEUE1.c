#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct QueueADT
{
	int front;
	int rear;
	int capacity;
	int *arr;
};
struct QueueADT* createQueue(int cap);                                //QueueADT return address

int isFullQueue(struct QueueADT *Q);
int isEmptyQueue(struct QueueADT *Q); 
int QueueCapacity(struct QueueADT *Q);
void enQueue(struct QueueADT *Q,int data);
int deQueue(struct QueueADT *Q);

struct QueueADT* createQueue(int cap)
{
	struct QueueADT *temp;
	temp=(struct QueueADT*)malloc(sizeof(struct QueueADT));
	temp->capacity=cap;
	temp->front=-1;
	temp->rear=-1;
	temp->arr=(int*)malloc(sizeof(int)*temp->capacity);          //array created of capacity 4
	return(temp);
}
int isEmptyQueue(struct QueueADT *Q){
	if(Q->front==-1)
	   return(1);
	else
	   return(0);   
}
int isFullQueue(struct QueueADT *Q){
	if(Q->front==0&&Q->rear==Q->capacity-1)
	   return(1);
	else if(Q->front==Q->rear+1)
	    return(1);
	else
	   return(0);    
}

int deQueue(struct QueueADT *Q){
	int data=-1;
	if(isEmptyQueue(Q)){
		print("Underflow");
	}
	else
	{
		data=Q->arr[Q->front];
		if(Q->front==Q->rear)
		    Q->front=Q->rear=-1;
	    else
            Q->front=(Q->front+1)%Q->capacity;
	}
	return data;
}
int QueueCapacity(struct QueueADT *Q)
{
return(Q->capacity);	
}
void enQueue(struct QueueADT *Q,int data){
	if(isFullQueue(Q))
	  print("Overflow");
	else
	{
	  Q->rear=(Q->rear+1)%Q->capacity;
	  Q->arr[Q->rear]=data;
	}
	if(Q->front==-1)
	  Q->front=Q->rear;    
}
main(){
	struct QueueADT *Q;
	Q=createQueue(4);
	//if(isEmptyQueue(Q)){
		
	///}//
	//if(isFullQueue(Q)){
		
	//}
	printf("Capacity of Queue is %d",queueCapacity(Q));
}
