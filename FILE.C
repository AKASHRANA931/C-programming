#include<stdio.h>
#include<stdlib.h>
void main()
{
   FILE *f =fopen("emp.txt","W");

   fprintf(f,"hello");

   fclose(f);

}