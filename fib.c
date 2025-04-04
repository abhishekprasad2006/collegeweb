#include<stdio.h>
void fib(int n,int f1,int f2)
{
	if(n<3)
	{
		return;
	}
	int curr=f1+f2;
	{
		printf("\t%d",curr);
		return fib(n-1,f2,curr);
	}
}
void printfib(int n)
{
	if(n<1)
	{
		printf("invalid no.of terms\n");
	}
	else if(n==1)
	{
		printf("%d\t",0);
	}
	else if(n==2)
	{
		printf("%d\t%d",0,1);
	}
	else
	{
		printf("%d\t%d",0,1);
		fib(n,0,1);
	}
}
int main()
{
	int n;
	printf("enter the no.of terms:");
	scanf("%d",&n);
	printfib(n);
	return 0;
}

