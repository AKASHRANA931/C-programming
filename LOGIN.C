#include<stdio.h>
#include<string.h>
#include<conio.h>
// Create by Akash Rana
void main()
{


	char username[15],fusername[15];
	char password[12],fpassword[12];
	FILE *fp;
	clrscr();
;
	fp=fopen("login.txt","r");
	fscanf(fp,"s",fpassword);
	fp=fopen("game.txt","r");
	fscanf(fp,"%s",fusername);

	cprintf("Enter your username :->");
	scanf("%s",&username);

	cprintf("Enter your password :->");
	scanf("%s",&password);

	if(strcmp(fusername,username)==0)
      {
	if(strcmp(fpassword,password)==0)
	{
	printf("\nWelcome. Login success!");
      }
	else
	 {
	 printf("\n Wrong input");
	 }
	}
	else
	{
	printf("\n User does not Exist");
	}

	getch();
}