#include<stdio.h>
#define max 50
int main()
{
int a[max],n,i,pos,val;
	
printf("Enter the elements in the array:");
scanf("%d",&n);
printf("Enter the %d elements:\n",n);

for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

printf("Enter the position to insert:");
scanf("%d",&pos);

printf("Enter the value to insert:");
scanf("%d",&val);

for(i=n-1;i>=pos-1;i--){
	a[i+1]=a[i];
}

a[pos-1]=val;

printf("The resultant array is:\n");
for(i=0;i<=n;i++)
{
	printf("%d\n",a[i]);
}
return 0;
}
