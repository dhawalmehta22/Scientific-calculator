#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>

float a,b,c,d,ans=0;
int add=0;
float result=0;

void home()
{
	
	printf("\n                                                --------------------------------");
    printf("\n                                                |!!..Welcome to C calculator..!!|");
	printf("\n                                                --------------------------------\n\n");
	printf("\n                               |*****************************************************************| \n");
    printf("\n                               |************* Press 'Q' or 'q' to quit the program **************| \n");
    printf("\n                               |********* Press 'H' or 'h' to display below options *************| \n");
    printf("\n                               |Enter 'C' or 'c' to clear the screen and display available option| \n");
	printf("\n                               ******************************************************************* \n");


    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter %% symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n");
	printf("Enter $ symbol for square root \n");
	printf("Enter e or E for exponent \n\n");
}
	int addition()
	{
		printf("Enter the First Number ");
		scanf("%f",&c);
		getchar();
		
		printf("Enter the Second Number ");
		scanf("%f",&d);
		getchar();

		result=c+d;
		
		printf("Your total is %f\n\n", result);	

		printf("Would you like to ADD another set of numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&add);
		switch(add)
		     {
			 case 1:
			 addition();
			 break;

			 case 2:
			 getchar();
			 system("cls");
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 main();
			 break;
			}
	}

	int subtraction()
	{
		printf("Enter the First Number ");
		scanf("%f",&c);
		getchar();
		
		printf("Enter the Second Number ");
		scanf("%f",&d);
		getchar();

		result=c-d;
		
		printf("Your total is %f\n\n", result);	

		printf("Would you like to subtract another set of numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&add);
		switch(add)
		     {
			 case 1:
			 subtraction();
			 break;

			 case 2:
			 getchar();
			 system("cls");
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 main();
			 break;
			}
	}
		int multiplication()
	{
		printf("Enter the First Number ");
		scanf("%f",&c);
		getchar();
		
		printf("Enter the Second Number ");
		scanf("%f",&d);
		getchar();

		result=c*d;
		
		printf("Your total is %f\n\n", result);	

		printf("Would you like to multiply another set of numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&add);
		switch(add)
		     {
			 case 1:
			 multiplication();
			 break;

			 case 2:
			 getchar();
			 system("cls");
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 main();
			 break;
			}
	}
	
		int division()
	{
		printf("Enter the First Number ");
		scanf("%f",&c);
		getchar();
		
		printf("Enter the Second Number ");
		scanf("%f",&d);
		getchar();

		result=c/d;
		
		printf("Your total is %f\n\n", result);	

		printf("Would you like to divide another set of numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&add);
		switch(add)
		     {
			 case 1:
			 division();
			 break;

			 case 2:
			 getchar();
			 system("cls");
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 main();
			 break;
			}
	}

	int modulus()
	{
		int result=0;
		int c,d;
		printf("Enter the First Number ");
		scanf("%d",&c);
		getchar();
		
		printf("Enter the Second Number ");
		scanf("%d",&d);
		getchar();

		result=c%d;
		
		printf("Your result is %d\n\n", result);	

		printf("Would you like to MOD another set of numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&add);
		switch(add)
		     {
			 case 1:
			 modulus();
			 break;

			 case 2:
			 getchar();
			 system("cls");
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 main();
			 break;
			}
	}
	
	int factorial()
	{
		int i;
		float fact=1;
		printf("Enter the Number ");
		scanf("%f",&c);
		getchar();

		for(i=1;i<=c;i++)
		{
			fact=fact*i;
		}
		
		printf("Your factorial is %f\n\n", fact);	

		printf("Would you like to fact another number\n1. Yes\n2. No\n\n");
		scanf("%d",&add);
		switch(add)
		     {
			 case 1:
			 factorial();
			 break;

			 case 2:
			 getchar();
			 system("cls");
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 main();
			 break;
			}
	}
	
	int power()
	{
		printf("Enter the base Number ");
		scanf("%f",&c);
		getchar();
		
		printf("Enter the Number to be raised to ");
		scanf("%f",&d);
		getchar();

		result=pow(c,d);
		
		printf("Your power is %f\n\n", result);	

		printf("Would you like to power another set of numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&add);
		switch(add)
		     {
			 case 1:
			 power();
			 break;

			 case 2:
			 getchar();
			 system("cls");
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 main();
			 break;
			}
	}
		int square_root()
	{
		printf("Enter the Number ");
		scanf("%f",&c);
		getchar();

		result=sqrt(c);
		
		printf("Your square root  is %f\n\n", result);	

		printf("Would you like to square root another numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&add);
		switch(add)
		     {
			 case 1:
			 square_root();
			 break;

			 case 2:
			 getchar();
			 system("cls");
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 main();
			 break;
			}
	}

	int E_no()
	{
		printf("Enter the Number ");
		scanf("%f",&c);
		getchar();

		result=(2.7182*c);
		
		printf("Your total is %f\n\n", result);	

		printf("Would you like to find for  another numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&add);
		switch(add)
		     {
			 case 1:
			 E_no();
			 break;

			 case 2:
			 getchar();
			 system("cls");
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 main();
			 break;
			}
	}
	

int main()
{	


	system("color b4");
	int X=1;
    char operation;

    // Function call 
    home();

    while(X)
    {
        printf("\n");
        printf("Enter the Operation you want to perform= ");

        operation=getche();
		printf("\n");
        switch(operation)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '%': modulus();
                      break;

            case '!': factorial();
                      break;

            case '^': power();
                      break;
			
			case '$': square_root();
                      break;

            case 'E':
			case 'e': E_no();
                      break;
                      
			case 'H':
            case 'h': system("cls");
					  home();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      home();
                      break;

            default : system("cls");

    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      home();
        }
}
}
