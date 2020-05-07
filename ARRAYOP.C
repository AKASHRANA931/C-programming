#include<stdio.h>
#include<conio.h>
void main()
{
	int ar[12],n,i,j,num,pos;
	clrscr();
	printf("Enter the size of array");
	scanf("%d",&n);
	for(i =1;i<=n;i++)
	{
	scanf("%d",&ar[i]);
	}
	printf("Enter the element");
	scanf("%d",&num);
	{
	 ar[i] = num;
	 n++;
	}
	for(i=1;i<=n;i++)
	{
	printf("%d",ar[i]);
	}
	printf("Enter the delete element");
	scanf("%d",&pos);
	for(i =pos;i<=n;i++)
	{
	ar[i] = ar[i+1];
	}
	n--;
	printf("your array");
	{
	for(i =1;i<=n;i++)
	{
	printf("%d",ar[i]);
	}
	}

	getch();
}