#include<stdio.h>
int main(){
int n,fa=1,i;
printf("Enter the value of N= ");
scanf("%d",&n);

for(i=n;i>=1;i--){              //intialized logic
    fa=fa*i;
}
printf("factorial=%d",fa);
return 0;
}
