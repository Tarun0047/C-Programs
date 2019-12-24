#include<stdio.h>
int main(){
int a,b,h;
printf("enter a and b= ");          //for understanding HCF will divide both a and b and is largest
scanf("%d%d",&a,&b);                //range of function will be from 1 and a i.e minimum of a,b ==min(a,b)
for(h=a<b?a:b;h>=1;h--){
    if(a%h==0 && b%h==0){
        break;
    }
}
printf("HCF is %d",h);
return 0;
}
