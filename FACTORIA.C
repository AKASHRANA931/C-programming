#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter the number");
	scanf("%d",&n);
	int fact = 1;
	while(n>1)
	{
	  fact = fact * n;
	  n = n - 1;

	}
	printf("%d",fact);
	getch();
}