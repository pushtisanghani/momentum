#include<stdio.h>
#include<conio.h>

main()
{
   clrscr();
   char chr;
   printf("enter char =");
   scanf("%c",&chr);
   if ((chr>='a'&&chr<='z')||
      (chr>='A'&&chr<='Z'))
      {
       printf("char %c is a alphabet,chr");
      }
      else if (chr>='0'&&chr<'9')
      {
      printf("char %c is digit,chr");
      }
      else
      {
      printf("char %c is special char,chr");
      }
   getch();
}

