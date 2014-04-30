#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();    // this function clears screen

do {
puts("\n\nEnter a character ");
a=getch();
printf("\nThe ASCII value of %c is %d",a,a);
printf("\nthe string is %s", a);
puts("\nDo you want to check another key");
a=getch();
} while((a=='n'||a=='N')==0);
}