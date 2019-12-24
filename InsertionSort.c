#include<stdio.h>
int main()
{
	int i,j,n,a[10],c,d,t;
	
	printf("Enter number of elements\n");
	scanf("%d",&n);
	
	printf("Enter %d integers\n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
//	for(i=0;i<=n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
	for(i=1;i<=n-1;i++)
	{
		d=c;
	}
	while(j>0&&a[j-1]>a[j])
	{
	t=a[j];
	a[j]=a[j-1];
	a[j-1]=t;	
	j--;
	}

printf("Sorted list in ascending order:");
for(i=0;i<=n-1;i++){
	printf("%d\n",a[i]);
}
return 0;

5}
