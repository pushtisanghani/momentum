#include<stdio.h>
#include<conio.h>

main()
{
     clrscr();
     int unit,bill,total,sub;

     printf("enter your unit=");
     scanf("%d",&unit);
     if(unit<=50)
     {
	  bill=unit*50;
     }
     else if(unit<=150)
     {
	  bill=(unit-50)*0.75+25;
     }
     else if(unit<=250)
     {
	  bill=(unit-150)*1.20+75;
     }
     else
     {
	  bill=(unit-250)*1.50+120;
     }
     sub=0.2*unit;
     printf("total : %d",bill+sub);
  getch();
}