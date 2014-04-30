//My first C++ program
#include<iostream.h>
#include<conio.h>
void void main (void)
{
char buffer [120] ;
int value, result ;
do {
printf ( "Give me a value : " ) ;
gets ( buffer ) ;
result = sscanf ( buffer, "%d",  &value ) ; 
} while (result != 1) ;
printf ( "%d \n", value ) ;
}