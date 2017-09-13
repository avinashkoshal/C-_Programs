//C program to find area of the triangle
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float alt,base,area;
	printf("enter the base and the altitude of the triangle");
	scanf("%f%f",&base,&alt);
	area=0.5*base*alt;           // formula
	printf("area of the triangle=%f",area);
	getch();
    }
