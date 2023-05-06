#include<stdio.h>
#include<conio.h>

main()
{
     clrscr();
     int n;
     printf("enter your number");
     scanf("%d",&n);
     (n%2)?printf("even number"):printf("odd number");
  getch();
}