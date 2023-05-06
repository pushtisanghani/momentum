#include<stdio.h>
#include<conio.h>

main()
{
   clrscr();
   char days;
   printf("\npress S to sunday");
   printf("\npress M to monday");
   printf("\npress T to tuesday");
   printf("\npress W to wednesday");
   printf("\npress t to thursday");
   printf("\npress F to friday");
   printf("\npress s to saturday");
   printf("\nenter your choice");
   scanf("%d",&days);
   switch(days)
   {
   case 1 :
	   printf("sunday");
	   break;
   case 2 :
	   printf("monday");
	   break;
   case 3 :
	   printf("tuesday");
	   break;
   case 4 :
	   printf("wednesday");
	   break;
   case 5 :
	   printf("thursday");
	   break;
   case 6 :
	   printf("friday");
	   break;
   case 7 :
	   printf("saturday");
	   break;
  default :
	   printf("plz enter valid choice!");
    }
 getch();
}
