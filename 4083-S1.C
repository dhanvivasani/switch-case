#include<stdio.h>
#include<conio.h>

main()
{

 int n;
 clrscr();
 printf("press 1");
 printf("\npress 2");
 printf("\npress 3");
 printf("\npress 4");
 printf("\npress 5");
 printf("\npress 6");
 printf("\npress 7");
 printf("\npress 8");
 printf("\npress 9");
 printf("\npress 10");
 printf("\npress 11");
 printf("\npress 12");
 printf("\nenter your choice:-");
 scanf("%d",&n);


 switch(n)

 {

   case 1:
	   printf("january");
   break;

   case 2:
	   printf("febuary");
	   break;

   case 3:
	   printf("march");
	   break;

    case 4:
	   printf("april");
	   break;

    case 5:
	   printf("may");
	   break;

    case 6:
	   printf("june");
	   break;

    case 7:
	   printf("july");
	   break;

    case 8:
	   printf("august");
	   break;

    case 9:
	   printf("september");
	   break;

    case 10:
	   printf("october");
	   break;

    case 11:
	   printf("november");
	   break;

    case 12:
	   printf("december");
	   break;

   default:
	   printf(" plz enter your proper choice");

  }
    getch();

}











