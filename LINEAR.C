#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],i,key,n;
	clrscr();
	printf("Enter the element if array\n");
	scanf("%d",&n);
	printf("Enter %d integer=",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter the searching element of array");
	scanf("%d",&key);
	{
	for(i=0;i<n;i++)
	{
	if(a[i]==key)
	{
	printf("%d is present at location %d\n",key,i);
	break;
	}
	}
	if(i==n)
	{
	printf("%d is not present in array\n",n);
	}
	}
	getch();
}


