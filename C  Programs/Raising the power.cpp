// C program to find the any random power of random integer
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main() {
	int a,b,c;                                     //declaratio of the variable
	printf("enter the number whose value is to raised");
	scanf("%d",&a);
	printf("enter the number upto which the power is raised");
	scanf("%d",&b);
	c= pow(a,b);                                    // formula used
	printf("the required result is%d",c);          // Fetching the answer
    getch();
}
