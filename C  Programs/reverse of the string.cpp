//C program to find reverse of a string
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	char s[100],r[100];
	int n,c,d;
	printf("input a string");
	gets(s);                          // its work is same as scanf
	n=strlen(s);
	for(c=n--,d=0;c>=0;c--,d++) {    // inverte for loop
	r[d]=s[c];
	}
	r[d]='\0';
	printf("reverse=%s",r);
	getch();
	}
	

