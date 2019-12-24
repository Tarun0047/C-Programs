# include <stdio.h>
# define size 5

void enqueue();
void dequeue();
void display();
int queue[size];
int rear =-1;
int front =-1;

int main()
{
 printf("\nEnter 1 for insert the element to queue (enqueue)");
 printf("\nEnter 2 for delete the element from queue (dequeue)");
 printf("\nEnter 3 for display the element of queue ");
while(1)
{
 int choice;
 printf("\nEnter the choice:");
 scanf("%d",&choice);

 switch(choice)
 {
 case 1:
 enqueue();
 break;
 case 2:
 dequeue();
 break;
 case 3:
 display();
 break;
 default:
 printf("\nWrong choice");
 }
 }
 }
 void enqueue()
 {
 int item;
 if(rear ==size-1)
 printf("\nQueue overflow");
 else
 {
 if(front==-1)
 front=0;
 printf("Insert the element in queue (enqueue):");
 scanf("%d",&item);
 rear=rear+1;
 queue[rear]=item;
 }
 }
 void dequeue()
 {
 if (rear==-1 || front >rear)
 {
 printf("\nQueue underflow :");
 }
 else
 {
 printf("\nElement deleted from queue is %d:",queue[front]);
 front=front+1;
 }
 }
 void display()
 {
 int i;
 if(front==-1)
 printf("\nQueue is empty");
 else
 {
 printf("\nQueue is:");
 for(i=front; i<=rear; i++)
 printf("%d\n",queue[i]);
 }
 }


