/* with RT and with argument */
#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
void main()
{
	int sum,x,y;
	printf("enter tow numbers\n");
	scanf("%d%d",&x,&y);
	sum=add(x,y);
	printf("sum is:=%d",sum);
}