#include<stdio.h>
int main(){
int n1,n2,temp;
printf("Enter N1 and N2= ");
scanf("%d%d",&n1,&n2);
temp=n1;
n1=n2;
n2=temp;
printf("N1= %d",n1);
printf("N2= %d",n2);
return 0;
}
