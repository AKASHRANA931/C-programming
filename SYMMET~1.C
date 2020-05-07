void symmetric();
void main()
{
    int ar1[] = {1, 2, 5, 4};
    int ar2[] = {2, 3, 6, 7};
    int ar3[20];
    int ar4[20];
    int i, j, k = 0, l = 0, m, found;
    int result[50];
    clrscr();
    printf("Output of symmetric difference of two Array:-\n");
    for(i = 0; i < 4; i++)
    {
		for(j = 0; j < 4; j++)
		{
		       found =0;
			if(ar1[i] == ar2[j])
			{
			      found = 1;
			      break;
			}
		}
	if(found == 0)
	{
		ar3[k] = ar1[i];
		k++;
	}
    }

     for(i = 0; i < 4; i++)
    {
		for(j = 0; j < 4; j++)
		{
		       found =0;
			if(ar2[i] == ar1[j])
			{
			      found = 1;
			      break;
			}
		}
	if(found == 0)
	{
		ar4[l] = ar1[i];
		l++;
	}
    }

	printf("\nArray 1 is :- \n");
	for(i = 0; i < 4; i++)
	{
		printf("%d\t", ar1[i]);
	}

	printf("\nAyyay 2 is :- \n");
	for(i = 0; i < 4; i++)
	{
		printf("%d\t", ar2[i]);
	}
	printf("\nArray 1 - Ayyar2 is:-\n");
	for(i = 0; i < k; i++)
	{
		printf("%d\t", ar3[i]);
	}
	printf("\nArray 2 - Array 1 is:-\n");
	for(i = 0; i < l; i++)
	{
		printf("%d\t", ar4[i]);
	}
	printf("\nSymmetric difference of both Array:-\n");

      for(i = 0; i < k; i++)
      {
	  result[i] = ar3[i];

      }
      for(j = 0; j < l; j++)
      {
	found = 0;
		for(m = 0; m < k; m++)
		{
			if(ar4[j] == ar3[m])
			{
				found = 1;
				break;
			}
		}

      if(found != 1)
      {
	result[i] = ar4[j];
	i++;
      }

      }
      for(j = 0; j < i; j++)
      {
		printf("%d\t", result[j]);

      }
   getch();
}
