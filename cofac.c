#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int m[3][3]={
	      {1,2,3},
	      {4,5,6},
	      {7,8,9}
	    };
int ad[3][3];
int k[2][2]={
			{14,15},
			{16,17}
			};
int i,j,a,b,c,d,x,y,ofadj;
clrscr();
for(a=0;a<3;a++)
{
	for(b=0;b<3;b++)
	{
	printf("Cofactor of m[%d][%d]:%d\n",a,b,m[a][b]);
						x=0;
						for(i=0;i<3;i++)
						{   if(a==i)
							continue;
							y=0;
							for(j=0;j<3;j++)
								{	if(b==j)
									continue;
									k[x][y]=m[i][j];
									y++;
								}
						x++;
						}
		for(x=0;x<2;x++)
		{ for(y=0;y<2;y++)
			printf("%d  ",k[x][y]);
			printf("\n");
			
		}
		c=(k[0][0]*k[1][1])-(k[0][1]*k[1][0]);
		d=pow(-1,(a+b+2));
		ofadj=c*d;
		printf("And Adj[%d][%d] is %d\n\n",a,b,ofadj);
			
	
	}
}

getch();
}

