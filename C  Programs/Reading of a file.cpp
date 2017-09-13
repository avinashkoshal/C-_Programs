// C code to read file  
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	FILE*fp;                   //creating a file pointer
   fp=fopen("k.txt","r");     // pening the file  
   if(fp==NULL) {            // if statement test condition ,if true then the below statement will be executed
   printf("file not found");
   }
   getch();
}
