// c program to add two numbers using function
/* User information
  Avinash koshal
  univ. Roll No.-1655/16
  Branch-CSE  */
#include<stdio.h>
#include<conio.h>
int add(int,int);          // Declaration of Functon
int main() {
	int a,b,sum;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);     // calling of function
	sum=add(a,b);
	printf("sum=%d",sum);
	getch();
	}
	int add(int x,int y) {
		int z;                
		z=x+y;              // Definition
		return z;
	}
