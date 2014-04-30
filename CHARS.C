#include<stdio.h>
#include<conio.h>
void main()
{
int i, a, b,x;
char z;
do
{
a=0; b=0; clrscr();
for(i=1;i<=255;i++)
	{
		if (b==20)
			{
				b=0;
				a=a+1;
			}
		gotoxy((a*15)+1,b+1);
		cprintf("%3d == %c",i,i);
		b=b+1;
		if(i%100==0)
		{
			printf("\n\t\t\tPress any key to continue %d",b);
			a=0; b=0;
			getch(); clrscr();
		}
	}
	printf("\n\n\n\n\n\n\n\t\t\tPress any key to Repeat and E to exit");
	z=getch();
	if(z=='e'||z=='E') exit(0);
}while(1==1);
}