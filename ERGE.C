#include<stdio.h>
#include<conio.h>
void main()
    {

	int ar1[]={1,2,3,4}, ar2[]={3,4,5,6}, ar3[30],  n=4, i=0, j=0, k = 0;
	clrscr();
	while (i<n && i<n)
	{
	    if (ar1[i] < ar2[j])
	    {
		ar3[k++] = ar1[i++];

	    }

	    else
	    {
		ar3[k++] = ar2[j++];

	    }

	}

	    while (i<n)
	    {
		ar3[k++] = ar1[i++];
	    }
	    while (j<n)
	    {
		ar3[k++] = ar2[j++];

	    }


	printf("\n After merging: \n");
	for (i=0; i < k; i++)
	{
	    printf("%d",ar3[i]);
	}
	getch();
}
