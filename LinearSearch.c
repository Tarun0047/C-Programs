#include<stdio.h>
int main()
{
int a[50],n,i,pos;
	
printf("Enter the number of elements in the array:");
scanf("%d",&n);
printf("Enter the %d elements:\n",n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
printf("Enter the position to search:");
scanf("%d",&pos);
for(i=0;i<n;i++){
	if(a[i]==pos){
		printf("%d is present at location %d\n",pos,i+1);
		break;
	}
	if(i==n){
		printf("%d is not present in array\n",pos);
	}
}
return 0;	
}
