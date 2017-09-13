// C code to Fahrenheit-Celsius
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */
#include <stdio.h>
#include<conio.h> 
    int main()   {    
	int fahr, celsius;  
	int lower, upper, step;
    lower = 0;      // lower limit of temperature scale  
	upper = 300;    // upper limit 
	step = 20;      // step size 
    fahr = lower;   
	while (fahr <= upper) {             //while loop test condition 
	celsius = 5 * (fahr-32) / 9;       // statement or formula to calculate temp. in celsius
	printf("%d\t%d\n", fahr, celsius);    
	fahr = fahr + step;               // increment
	}  
	getch();
	}

