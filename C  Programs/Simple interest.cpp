// C code to calculate simple interest
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	int p,t;
	float si,r;              // the value of si and rate is the floating value
	printf("Enter the value of p r t");
	scanf("%d%f%d",&p,&r,&t);
	si=p*r*t/100;          //formula for simple interest
	printf("the result is%f",si);
	getch();	
}
