/* print sum of square of all numbers between 5 and 25 */
#include<stdio.h> 
#include<conio.h>
void main()
{
	int i,sum=0,square;
	for(i=25;i>=5;i++)
	{
		square=i*i;
		sum=sum+square;
	}
	printf("sum is:=%d",sum);
	getch();
}