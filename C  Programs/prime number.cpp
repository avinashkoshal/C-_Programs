// C code to check that the entered number is prime or not
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */
#include <stdio.h>
#include<conio.h>
int main() {
   int n, i;
   printf("Enter a number\n");
   scanf("%d", &n);
   if ( n == 2 )
    printf("Prime number.\n");
   else{
   for ( i = 2 ; i <= n - 1 ; i++ ) {
   if ( n % i == 0 )
    break;
    }
    if ( i != n )
    printf("Not prime.\n");
   else
    printf("Prime number.\n");
   }
   getch();
}
