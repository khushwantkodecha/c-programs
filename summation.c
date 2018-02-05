/* summation of 101+99+97+.....+3+1=? */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int sum=0;
	for(i=101;i>=1;i-=2)
	{
		sum=sum+i;
	}
	printf("sum is:=%d",sum);
}