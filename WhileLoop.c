/* print 1 to 10 using while loop */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
	printf("enetr any key to exit");
	getch();
}