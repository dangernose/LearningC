#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int m[3][3];
int i,j,a,b,n;
clrscr();
printf("Insert 1st matrix row wise separated by space \n");
for(n=0;n<3;n++)
scanf("%d%d%d",&m[n][0],&m[n][1],&m[n][2]);

printf("Cofactors of each element\n");
for(a=0;a<3;a++)
{
	for(b=0;b<3;b++)
	{
			printf("Cofactor of A[%d][%d] = %d\n",a,b,m[a][b]);
			for(i=0;i<3;i++)
			{   if(i==a)
				continue;
				for(j=0;j<3;j++)
				{	if(j==b)
					continue;
					printf("%d  ",m[i][j]);
				}
				printf("\n");
			}
	printf("\n");
	}
}
getch();

}