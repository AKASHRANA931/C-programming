#include<stdio.h>
#include<conio.h>
void main()
{
	int ar[10],n=6,i,j,temp;
	clrscr();
	printf("Enter the array ellemnt");
	for(i=0;i < n;i++)
	{
	scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=1;j<n;j++)
	{
		if(ar[j-1]>ar[j])
		{
		temp = ar[j-1];
		ar[j-1] = ar[j];
		ar[j] = temp;
		}

	}
	}
	for(i=0;i<n;i++)
	{
	printf("%d",ar[i]);
	}
	getch();
}
