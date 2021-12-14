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
		{system("cls");
		Index();
		}
	fclose(p);
	return 0;
    }                                                      //end of cover page
    int Index()                                       //starting of index
    {
    	system("cls");
    	FILE *p;
    	char a[200];
    	p=fopen("src/text_src/Index.txt","r");
    	while(!feof(p))
    	{
    		fgets(a,200,p);
    		printf("%s\n",a);
    			}                                                  //end of index page
    		 
    	    int choice;
    		printf("enter your choice");
    		scanf("%d",&choice);
    		switch (choice)
    		{
    			case 1:Introduction();
    			break;
    			case 2:C_Declaration();
    			break;
    	        case 3:Operators_and_Expressions();
    			break;
    			case 4:Input_and_Output();
    			break;
    			case 5:Decision_Statements();
                break;
                case 6:Loops();
                break;
                case 7:Array();
                break;
                case 8:String();
                break;
                case 9:Suggestion();
                printf("\nTHank You");
				break;
				default:printf("invalid input");
				//getch();
				Index();
			}       //end of switch
fclose(p);
return 0;			
}                                                              //end of index function
			void Introduction()                               //starting of introduction
 			      {
	  
	  system("cls");
	  FILE *p;
	 char a[1000];
	 p=fopen("src/text_src/Introduction.txt","r");
		while(!feof(p))
		{
		fgets(a,1000,p);
		printf("%s\n",a);
        }   
	int choice,n;
    printf("\n enter your choice");
	printf("\npress 0 for Index ");
	scanf("%d",&choice);
	  switch (choice)
	  {	
	    case 0: Index();
        break;
	    case 1: The_First_C_Program();
	  	break;
	  	case 2: Header_Files();
	  	break;
	  	case 3: Languages_in_C();
	  	break;
	  	case 4: Advantages_of_C();
	  	break;	
	  	default:  printf("invalid output ");    	
	     }
