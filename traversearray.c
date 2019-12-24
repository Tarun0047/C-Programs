#include<stdio.h>
#define max 100
int main(){
int i,n,a[max];
printf("Enter no of elements in the array= ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("\nEnter %d element ",i+1);
    scanf("%d",a[i]);
}
printf("\nThe array is as follows :\n");
for(i=0;i<n;i++){
    printf("\t %d",a[i]);
}
printf("\n");
return 0;
}
