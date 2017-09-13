//C program to find smallest number from entered four numbers
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	int a,b,c,d;                              //declaration of thre variables
	printf("Enter the values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<b&&a<c&&a<d) {                       // If statement. The condition is about to test if it becomes true then the statement 
	printf("the smaller number is a=%d",a);  // will be executed if not then the control pass to the next loop
    }
	else if(b<a&&b<c&&b<d) {
    printf("the smaller number is b=%d",b);
    }
	else if(c<a&&c<b&&c<d) {
	printf("the smaller number is c=%d",c);
    }
	else if(d<a&&d<b&&d<c) {
	printf("the smaller number is d=%d",d);
	}
    getch();
}
