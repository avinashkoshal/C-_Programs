// C code to find the factorial
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */
#include <stdio.h>
#include<conio.h>
int main()
{
  int c, i, fact = 1,n;
  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &n);
  for (i= 1; i <= n; i++)   // for loop (test condition if it is true then the loop will execute and print the below statement
    fact = fact * i;
 
  printf("Factorial of %d = %d\n", n, fact);
 
   getch();
}
