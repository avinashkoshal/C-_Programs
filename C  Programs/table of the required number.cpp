// c program to print the table of any given number
/* User information
  Avinash koshal
  univ. Roll No.-1655/16
  Branch-CSE  */
  #include<stdio.h>
  #include<conio.h>
  int main() {
    int i,c,a;               // declaration of the variables
    printf("enter the number whose table is required");
    scanf("%d",&a);      
    for(i=0;i<=100;i++) {  // due to this the value of i changes from 1 to 100
    c=a*i;            // Calculating the table
    printf("%d*%d =%d\n",a,i,c);
	}
	
	getch();
  }
