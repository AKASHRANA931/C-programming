#include<stdio.h>
#include<conio.h>

void main()
{
	int n ,i,first,second,temp =0;
	clrscr();
	first = 1;
	second =0;
	printf("Enter the number -> ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	temp = first;
	first = second;
	second = temp + first;
	printf("%d ",first);
	}
	printf("\nThanks");
	getch();
}