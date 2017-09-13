// C code to check that whether the entered number is even or odd
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	int a;
	printf("enter the value");
	scanf("%d",&a);
	if(a%2==0) {             // Condition which is about to tested if it is true then the statement is executed
		printf("the number is even");   // if the number is divisible by 2 then it is even otherwise odd
	}
	else {
		printf("the entered number is odd");
		
	}
	getch();
 }

