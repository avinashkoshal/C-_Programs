// C program to Swap the values
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	int a,b,c;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	c=a+b;            // if a=3 and b=2 then c=5
	a=c-a;           //  5-3 = 2 overwrite the value of a
	b=c-b;          //  5-2 = 3 overwrite the value of b          
	printf("the swapped values are%d%d",a,b);
	getch();
}
