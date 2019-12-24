#include<stdio.h>
#include<conio.h>
void insertion(int [],int);
int main()
{
int k;
int A ={34,45,11,89,55,19,22,8,40};
insertion(A , 9);	
for(k=0;k<=8;k++)
{
	printf(" %d",A[k]);
}
	getch();
}
void insertion(int A[],int N)
{
	int i,j,temp;
	for(i=1;i<N;i++){
		temp=A[i];
		for(j=i-1;j>=0&&temp<A[j];j--)
		{
			A[j+1]=A[j];
    	A[j+1]=temp;
		}
	}
}


