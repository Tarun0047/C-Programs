#include<stdio.h>

int main()
{
int n,temp,min,ar[20],h,i,j,k;
printf("\nEnter the Number of elements:");
scanf("%d",&n);
printf("\nEnter the %d elements:\n",n);
for(h=0 ; h<n ; h++)
{
	scanf("%d",&ar[h]);
}
for(i=0;i<n-1;i++)         
{
	min=i;
	for( j=i+1 ; j<n ; j++)     
	{
		if(ar[j] < ar[min])
		{
		temp = ar[j];
		ar[j] = ar[i];
		ar[i] = temp;	
		}
	}
}
printf("Sorted elemets are:");
for(k=0 ; k<n ; k++)
{
	printf("%d ",ar[k]);
}
}
