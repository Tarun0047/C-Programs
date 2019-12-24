#include<stdio.h>

int main()
{
int n,sum=0,i;

printf("How many numbers you want to add= ");
scanf("%d",&n);

i=1;
while(i<=n)
{
    sum+=i;
    ++i;
}
printf("SUM= %d",sum);
return 0;
}
