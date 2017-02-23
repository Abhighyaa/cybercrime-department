/* Project for cybercrime management */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void intro();
void invalid();
void confirm();
void new_complaint();
int main()
{
int a,b,c,co,d,e,f,g,h,i,j,k,l,ci;
char un,gm,gm1,fn,st [100] ,fb [100];
int pw,y;
int usc,ulc;
FILE *fp,*fcomp;
FILE *fu;
clrscr();
fp=fopen("cybercrime.txt","w");
fprintf(fp,"\n\n\t\t\t\tCYBER CRIME DEPARTMENT\n\n");
fu=fopen("userdatabase.txt","a");
fcomp=fopen("complaints_list.txt","a");
intro();
la : printf(" \n\n\n\t\t\t 1.User\n\t\t\t 2.Admin\n\t\t\t 3.Exit\n\n\t\t\t ");
scanf("%d",&a);
fscanf(fp,"%d",&a);
intro();
if(a==1)
	{
	fprintf(fp,"User\t");
	lb : printf("\n\n\n\t\t\t 1.Signup\n\t\t\t 2.Login \n\t\t\t 3.Exit\n\n\t\t\t ");
	scanf("%d",&b);
	fscanf(fp,"%d",&b);
	intro();
	if(b==2)
		{
		fprintf(fp,"Login");
		cprintf("\tUsername");
		printf("    ");
		scanf("%s",&un);
		fscanf(fu,"%s",&un);
		cprintf("\tPassword");
		printf("    ");
		scanf("%d",&pw);
		fscanf(fu,"%d",&pw);
		confirm();
		scanf("%d",&ulc);
		intro();
		if(ulc==2)
		{
		goto la;
		}
		if(ulc==1)
		{
		if(pw==1234)
			{
			ld :	printf("\n\n1.To register a new complaint\n\n2. To check the status of previously filed complaint\n\n3. Logout\n\n\n");
			scanf("%d",&i);
			intro();
			if(i==1)
			{
			new_complaint();
			goto ld;
			}
			else if(i==2)
			{
			lf :   	printf("Enter your complaint id\n");
			scanf("%d",&j);
			printf("Your complaint id is%d",j);
			printf("1.Confirm\n2.Change\n3.Exit\n ");
			scanf("%d",&ci);
			if(ci==1)
			{
			printf("Your complaint is being processed.\n");
			printf("Thank you for using our service.\n");
			goto ld;
			}
			else if(ci==2)
			{
			goto lf;
			}
			else
			{
			exit(0);
			}
			}
			else if(i==3)
			{
			goto la;
			}
			else
			{
			printf("Invalid choice\n");
			goto ld;
			}
      //	getch();
			}
		else
			{
			printf("Incorrect password\n");
			goto la;
			}
		}
		}
       else if(b==1)
			{
			cprintf("\t NAME");
			printf("            ");
			scanf("%s",&fn);
			fscanf(fu,"%s",&fn);
			cprintf("\n\t Gmail account");
			printf("   ");
			scanf("%s",&gm1);
			fscanf(fu,"%s",&gm1);
			cprintf("\n\t Password");
			printf("        ");
			scanf("%d",&pw);
			fscanf(fu,"%d",&pw);
		      le :	confirm();
			scanf("%d",&k);
			intro();
			if(k==1)
			{
			printf("\n\n\n\n\nYou have signed up successfully.");
			printf("\n\n\n1.To register a new complaint\n\n2.To logout\n\n");
			scanf("%d",&y);
			intro();
			if(y==1)
			{
			new_complaint();
			goto ld;
			}
			else
			{
			goto la;
			}
			}
			else if(k==2)
			{
			exit(0);
			}
			else
			{
			printf("Invalid choice.\n");
			goto le;
			}
			}
       else if(b==3)
		{
		exit(0);
		}
		/*else
		{
		printf("Invalid choice\n");
		goto lb;
		}*/
       }
/*else if(a==2)
	{
	fprintf(f,"Admin\n");
	lc : printf("1.Login\n2.Exit\n");
	scanf("%d",&c);
	if(c==1)
		{
		printf("Enter username:\n");
		scanf("%s",&un);
		printf("Enter password:\n");
		scanf("%d",&pw);
		intro();
		if(pw==1234)
			{
			fclose(fp);
			printf("Login was successful.\n");
			fcomp=fopen("complaints_list.txt","r");
			}
		else
			{
			printf("Incorrect password\n");
			goto la;
			}
		}
       else if(c==2)
		{
		exit(0);
		}
	else
		{
		printf("Invalid choice\n");
		goto lc;
		}
	}       */

else if(a==3)
	{
	exit(0);
	}
else
	{
	printf("Invalid choice.\n");
	goto la;
	}
fclose(fp);
fclose(fcomp);
fclose(fu);
//fc=fopen("cybercrimebackup.txt","w");
//File.Copy("cybercrime.txt","cybercrimebackup.txt");
//fclose(fc);
getch();
return(0);
}
void intro()
{
clrscr();
printf("\n\n\t\t\tCYBERCRIME DEPARTMENT\n\n");
}
void invalid()
{
printf("\n\n\t\t\tInvalid choice\n");
delay(3000);
}
void confirm()
{
printf("\n\n\t\t\t\t\t 1.Okay\n\t\t\t\t\t 2.Cancel\n\n\n\t\t\t\t\t ");
}
void new_complaint()
{
int co,d,e,f,g,h,l;
char st,fb;
printf("\n\n\n\tYour complaint:-\n");
printf("\t\t\t1.Banking fraud\n \t\t\t2.Abusive chats \n\t\t\t3.credit card fraud \n\t\t\t4.Email hacking \n\t\t\t5.E-commerce frauds \n\t\t\t6.Other complaints \n\n\n\t\t\t");
scanf("%d",&co);
intro();
switch(co)
	{
	case 1: cprintf("\t Banking fraud:-\n\n");
	printf("1.Online banking fraud \n                 2.Fraud call for ATM card verification \n                 3.Amount deducted from account \n                 4.fraud call \n                 5.Fraud banking cheating call recieved \n\n                 ");
	scanf("%d",&d);
	break;
	case 2: cprintf("\t Abusive chats:-\n\n");
	printf("1.Whatsapp harrassing \n                 2.facebook hacked and offensive posts \n                 3.abusive text messages and calls \n                 4.phishing attack \n\n                 ");
	scanf("%d",&e);
	break;
	case 3: cprintf("\t Credit card fraud:-\n\n");
	printf("1.Fraud calls to get credit card details \n                     2.Fraud calls to block credit cards \n                     3.Fraudulent phishing calls \n                     ");
	scanf("%d",&f);
	break;
	case 4: cprintf("\t email hacking:-\n");
	printf("1.Email hacked \n                 2.Attempts to hack mail id\n                 ");
	scanf("%d",&g);
	break;
	case 5: cprintf("\t E commerce frauds:-\n");
	printf("1.Online matka gambling contests \n                     2.Fake website gas dealership \n                     3.Fake transactions \n                     ");
	scanf("%d",&h);
	break;
	case 6:cprintf("\t Enter your complaint:\n");
	scanf("%s",&st);
	printf("%s",st);
	//gets(st);
	//puts(st);
	break;
	}
	intro();
	printf("\n\nYour complaint have been successfully registered.\n");
	printf("\nYour complaint id is %d\n",l);
	printf("\nEnter feedback\n");
	scanf("%s",&fb);
	printf("\n\n");
	intro();
	printf("\n\n\n\n\t\t\tThank You\n");
}
