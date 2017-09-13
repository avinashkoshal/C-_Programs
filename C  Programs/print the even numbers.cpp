// C program to print the even numbers startin from 2 -24
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	int i,n;
	printf("enter the value of n");
	scanf("%d",&n);
	i=2;                    // initialisation of the loop
	while(i<=n)  {         // Testing part
	if(i%2==0){
	printf("\n%d",i);    // statement of the loop
	i++;                // increment
	}
    }   
	getch();
}
