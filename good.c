/*
  Name: Complicated Calculator
  Copyright: www.SuprheroHoodTec.com
  Author: Larry Lewis
  Date: 27/12/10 06:01
  Description: Overly Complicated Calculator.  My second program in C
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 
#include <float.h>
#include <math.h>
#include <stdarg.h> 
#include <stdlib.h>
#include <ctype.h>
#include <limits.h> 
#include <setjmp.h>
#include <stddef.h>
#include <string.h>
#include <errno.h>
#include <locale.h>
#include <signal.h> 
#include <stdio.h>
#include <time.h>

//External Reference
extern int    add,precaladd ,subtract, precalsubtract, multiply,precalmultiply, divide,precaldivide, precal;

//External Function
int mainint;
int h;

//Internal Function
main()
{
	printf("Welcome to the Simple calulator\n\n");
	printf("Please make a selection\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n\n");
	scanf("%d",&h);
		switch(h)
	          {
	               case 1:
	               precaladdfunc();
	               break;
				
				case 2:
				precalsubtractfunc();
				break;
				
				case 3:
				precalmultiplyfunc();
				break;

				case 4:
				precaldividefunc();
				break;

				case 5:
	               exit(1);
	               break;

				default:
				printf("You have not given a correct response\npress any key to continue\n\n");
				break;
	          }
	getchar();
	getchar();
}
//External Reference
extern int     mainint, subtract,precalsubtract, multiply,precalmultiply, divide, precaldivide, precaladd;

//Internal Reference

//Addition Controller
float a,b;
int c,d;
int add;

//Subtraction Controller
int g,h;
float e,f;
int subtract;

//Multiplication Controller
float i,j;
int k,l;
int multiply;

//Division controller
float m,n;
int o,p;
int divide;

//Addition Internal Functions
addfunc()
	{
	 	printf("Enter the First Number(s) ");
		scanf("%d",&c);
		getchar();
		
		printf("Enter the Second Number(s) ");
		scanf("%d",&d);
		getchar();

		printf("Your total is %d\n\n", c+d);

		printf("Would you like to ADD another set of numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&add);
		switch(add)
		     {
			 case 1:
			 precaladdfunc();
			 break;

			 case 2:
			 getchar();
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 getchar();
			 main();
			 break;
			}
		
	}


daddfunc()
	{
	 	printf("Enter the First Number(s) ");
		scanf("%f",&a);
		getchar();

		printf("Enter the Second Number(s) ");
		scanf("%f",&B)/>;
		getchar();

		printf("Your total is %f\n\n", a+B)/>;

		printf("Would you like to ADD another set of numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&add);
		switch(add)
		     {
			 case 1:
			 precaladdfunc();
			 break;

			 case 2:
			 getchar();
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response.\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 getchar();
			 main();
			 break;
			}
		
	}

//Subtraction Internal Controller
dsubtractfunc()
		{
	 	printf("Enter the First Number(s) ");
		scanf("%f",&e);
		getchar();
		
		printf("Enter the Second Number(s) ");
		scanf("%f",&f);
		getchar();

		printf("Your total is %f\n\n", e-f);

		printf("Would you like to SUBTRACT another set of numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&subtract);
		switch(subtract)
		     {
			 case 1:
			 precalsubtractfunc();
			 break;

			 case 2:
			 getchar();
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 getchar();
			 main();
			 break;
			}
		
	}


subtractfunc()
	{
	 	printf("Enter the First Number(s) ");
		scanf("%d",&g);
		getchar();

		printf("Enter the Second Number(s) ");
		scanf("%d",&h);
		getchar();

		printf("Your total is %d \n\n", g-h);

		printf("Would you like to sUBTRACT another set of numbers\n1. Yes\n2. No \n\n");
		scanf("%d",&subtract);
		switch(subtract)
		     {
			 case 1:
			 precalsubtractfunc();
			 break;

			 case 2:
			 getchar();
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response.\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 getchar();
			 main();
			 break;
			}
}

//Multiplication Controller
dmultiplyfunc()
		{
	 	printf("Enter the First Number(s) ");
		scanf("%f",&i);
		getchar();
		
		printf("Enter the Second Number(s) ");
		scanf("%f",&j);
		getchar();

		printf("Your total is %f\n\n", i*j);

		printf("Would you like to MULTIPLY another set of numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&multiply);
		switch(multiply)
		     {
			 case 1:
			 precalmultiplyfunc();
			 break;

			 case 2:
			 getchar();
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 getchar();
			 main();
			 break;
			}
	}

multiplyfunc()
	{
	 	printf("Enter the First Number(s) ");
		scanf("%d",&k);
		getchar();

		printf("Enter the Second Number(s) ");
		scanf("%d",&l);
		getchar();

		printf("Your total is %d \n\n", k*l);

		printf("Would you like to MULTIPLY another set of numbers\n1. Yes\n2. No \n\n");
		scanf("%d",&multiply);
		switch(multiply)
		     {
			 case 1:
			 precalmultiplyfunc();
			 break;

			 case 2:
			 getchar();
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response.\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 getchar();
			 main();
			 break;
			}
	}

//Division Controller
ddividefunc()
	{
	 	printf("Enter the First Number(s) ");
		scanf("%f",&m);
		getchar();
		
		printf("Enter the Second Number(s) ");
		scanf("%f",&n);
		getchar();

		printf("Your total is %f\n\n", m/n);

		printf("Would you like to DIVIDE another set of numbers\n1. Yes\n2. No\n\n");
		scanf("%d",&divide);
		switch(divide)
		     {
			 case 1:
			 precaldividefunc();
			 break;

			 case 2:
			 getchar();
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 getchar();
			 main();
			 break;
			}
	}

dividefunc()
	{
	 	printf("Enter the First Number(s) ");
		scanf("%d",&o);
		getchar();

		printf("Enter the Second Number(s) ");
		scanf("%d",&p);
		getchar();

		printf("Your total is %d \n\n", o/p);

		printf("Would you like to DIVIDE another set of numbers\n1. Yes\n2. No \n\n");
		scanf("%d",&divide);
		switch(divide)
		     {
			 case 1:
			 precaldividefunc();
			 break;

			 case 2:
			 getchar();
			 main();
			 break;
			 
			 default:
			 printf("You have entered an invalid response.\nPress the 'Enter' key to return to the Main Menu.\n\n");
			 getchar();
			 getchar();
			 main();
			 break;
			}
	}
//Internal Reference
int precaladd;
int down;		//D.O.W.N. (Decimal or Whole Number)
int divide;
int precaldivide;
int mainint, subtract,precalsubtract, multiply,precalmultiply, divide, precaldivide, precaladd;

//Internal Function
//Pre Addition Calculator
precaladdfunc()
	{
	 	printf("What type of Numbers would you like to use?\n1. Decimals\n2. Whole Numbers (Without Decimals)\n\n");
		scanf("%d", &down);
		switch(down)
			{
			 	 case 1:
				 daddfunc();
				 break;

				 case 2:
				 addfunc();
				 break;

				 case 3:
				 getchar();
				 printf("Returning To main Menu\n\n");
				 main();
				 break;

				 default:
				 printf("This is an invalid entry. Please retry\n\n");
				 getchar();
				 getchar();
				 precaladdfunc();
				 break;
			}
	getchar();
	getchar();
	}

//Pre-Subtraction Calculator
precalsubtractfunc()
	{
	 	printf("What type of Numbers would you like to use?\n1. Decimals\n2. Whole Numbers (Without Decimals)\n\n");
		scanf("%d", &down);
		switch(down)
			{
			 	 case 2:
				 dsubtractfunc();
				 break;

				 case 1:
				 subtractfunc();
				 break;

				 case 3:
				 getchar();
				 printf("Returning To main Menu\n\n");
				 main();
				 break;

				 default:
				 printf("This is an invalid entry. Please retry\n\n");
				 getchar();
				 getchar();
				 precaladdfunc();
				 break;
			}
	getchar();
	getchar();
	}

//Pre Multiplication Calculator
precalmultiplyfunc()
	{
	 	printf("What type of Numbers would you like to use?\n1. Decimals\n2. Whole Numbers (Without Decimals)\n\n");
		scanf("%d", &down);
		switch(down)
			{
			 	 case 1:
				 dmultiplyfunc();
				 break;

				 case 2:
				 multiplyfunc();
				 break;

				 case 3:
				 getchar();
				 printf("Returning To main Menu\n\n");
				 main();
				 break;

				 default:
				 printf("This is an invalid entry. Please retry\n\n");
				 getchar();
				 getchar();
				 precalmultiplyfunc();
				 break;
			}
	getchar();
	getchar();
	}

//Pre Division Calculator
precaldividefunc()
	{
	 	printf("What type of Numbers would you like to use?\n1. Decimals\n2. Whole Numbers (Without Decimals)\n\n");
		scanf("%d", &down);
		switch(down)
			{
			 	 case 1:
				 ddividefunc();
				 break;

				 case 2:
				 dividefunc();
				 break;

				 case 3:
				 getchar();
				 printf("Returning To main Menu\n\n");
				 main();
				 break;

				 default:
				 printf("This is an invalid entry.");
				 getchar();
				 getchar();
				 main();
				 break;
			}
	getchar();
	getchar();
	}

