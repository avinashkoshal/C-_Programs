// C code to compute Quotient and remainder
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */
#include <stdio.h>
#include<conio
.h>
int main(){
   int dividend, divisor, quotient, remainder;  //declaration of variables

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);
	quotient = dividend / divisor;     // Computes quotient
    remainder = dividend % divisor;   // Computes remainder

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
     getch();
}
