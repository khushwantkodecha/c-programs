/* without RT and without argument */
#include<stdio.h>
#include<conio.h>
void add()
{
	int a,b,c;
	printf("enter tow numbers\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum is:=%d",c);
}
void main()
{
	add();
}