#include<stdio.h>
#include<conio.h>
void main()
{
	int ar1[]={2,3,4,5};
	int ar2[]={1,3,2,6};
	int ar3[30],i,j,k,n=4;
	clrscr();
	printf("\t\t program of Cross Product\n");
	printf("\n\nOutput of Program\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)

		{

		printf("\t   {%d,%d}",ar1[i],ar2[j]);

		}
	}


	getch();
}