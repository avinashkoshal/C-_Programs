// C program to swap the values By call By refrence
/* User information
Avinash koshal
Univ. Roll No-1655/16
Branch-CSE
Section A2  */
#include<stdio.h>
#include<conio.h>
int swap(int*,int*);     // declaration of function
int main() {
int a,b;
printf("enter the values of a and b");
scanf("%d%d",&a,&b);         
swap(&a,&b);          // Calling of the funcion 
getch();
}
int swap(int* x,int* y) {
int temp;
temp=*x;  // storing X value into temp.
*x=*y;    //storing Y value into X                // definition of the funcion
*y=temp;// string temp value into Y
printf("the swapped values are%d%d",x,y);
}
