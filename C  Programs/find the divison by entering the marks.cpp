
// C program to check the division by entering the marks in different subect
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	int m1,m2,m3,m4,per;
	printf("enter the marks");
	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
	per=(m1+m2+m3+m4)*100/400;          // formula to find the percentage
	if(per>=90){                       // decicion control  structure  
		printf("first division");
		}
	else if(per>=80) {                    
		printf("2nd division");
	}
	else if(per>=70) {
		printf("3rd division");
	}
	else
	 {
		printf("fail");
	}
	getch();
}
