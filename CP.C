#include<stdio.h>
#include<conio.h>
void CP(int arr1[],int arr2[],int n,int n1)
{
	int i,j;
	clrscr();
	for(i=0;i<n;i++)
		for(j=0;j<n1;j++)
			printf("{%d,%d}",arr1[i],arr2[j]);



}
void main()
{
	int arr1[]={1,2,3};
	int arr2[]={4,5,6};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int n2=sizeof(arr2)/sizeof(arr2[0]);
	CP(arr1,arr2,n1,n2);
	getch();

}