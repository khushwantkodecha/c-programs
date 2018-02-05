#include<stdio.h>
#include<conio.h>
void main()
{
	max();
}
max()
{
	int n1,n2;
	printf("enter first number:=");
	scanf("%d",&n1);
	printf("enter second number:=");
	scanf("%d",&n2);
	if(n1>n2)
	{
		printf("max is n1:=%d",n1);
	}
	else if(n2>n1)
	{
		printf("max is n2:=%d",n2);
	}
	else
	{
		printf("both are equal");
	}
}