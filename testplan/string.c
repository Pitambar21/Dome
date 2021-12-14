#include<stdio.h>
#include<stdlib.h>
//#include<process.h>
#include<string.h>
void Arithmetic_Operators();
void Suggestion();
void Relational_Operators();
void Logical_Operators();
void Bitwise_Operators();
void Operators_and_Expressions();
int Index();
void prgoao();
void prgobo();
void prgolo();
void prgoro();
void Arithmetic_Operators()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Arithmetic_Operators.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for chapter outline \n press 1 for next topic \n if you want to run this code press 2");
     scanf("%d",&n);
     if(n==0)
    {system("cls");
    	Operators_and_Expressions();
	}
    else if(n==1)
	{
		system("cls");
		Relational_Operators();
	}
	else if (n==2)
	{
		system("cls");
		prgoao();
	}
	fclose(p);
	}//end of arithmetic operator
	
	void prgoao()
	 {

   int a = 21;
