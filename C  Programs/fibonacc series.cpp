// C code to print the fibonacci series
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */
#include <stdio.h>
#include<conio.h>
 int main() {
   int n, first = 0, second = 1, next, i;
   printf("Enter the number of terms\n");
   scanf("%d",&n);
   printf("First %d terms of Fibonacci series are :-\n",n);
   for ( i = 0 ; i< n ; i++ )
   {
    if ( i <= 1 )   // if statement 
    next = i;      // if the above statement will true then it will be executed
    else
    {
    next = first + second;
    first = second;       // if statement will false then this will exrcute
    second = next;
    }
    printf("%d\n",next);
   }
 getch();
 }
