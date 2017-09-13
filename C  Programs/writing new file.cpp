// C code to write a new file
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	FILE*fp;
   fp=fopen("k.txt","w");
   if(fp==NULL) {
    	printf("file not found");
   }
   
   getch();
}
