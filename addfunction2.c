#include<stdio.h>
#include<conio.h>
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("sum is:=%d",c);
}
void main()
{	
	int x,y;
	printf("enter tow numbers\n");
	scanf("%d%d",&x,&y);
	add(x,y);
}