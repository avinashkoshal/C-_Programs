//C program to reverse the entered value
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	int num,a,b,c,d,e,f,g,h,i,j;
	int sum=0;
	printf("enter the number");
	scanf("%d",&num);
    a=num/10;                                  // this divides the entered number 
    b=num%10;                                 // this returns the remainder
    c=a/10;
    d=a%10;
    e=c/10;
    f=c%10;
    g=e/10;
    h=e%10;
    i=g/10;
    j=g%10;
    sum=sum+b*10000+d*1000+f*100+h*10+j*1; // used to calculate the result   
    printf("the reverse is=%d",sum);
    getch();
}
