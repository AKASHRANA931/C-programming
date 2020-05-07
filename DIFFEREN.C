#include<stdio.h>
#include<conio.h>
void main()
{
	int ar1[]={1,3,6,8,4};
	int ar2[]={3,5,9,8,7};
	int ar4[20],i,j,n=5,found;
	clrscr();
	printf("\t\t Difference b/w two Sets");
	printf("\nOutput of Program\n\n");
	for(i=0;i<n;i++)
	{
	      for(j=i;j<n;j++)
	      {
	      found=0;

		 if(ar1[i]==ar2[j])

		 found=1;
		 break;
	      }


		 if(found==0)
		 {
			 printf("\n%d",ar1[i]);
		 }

	}
		getch();
}
