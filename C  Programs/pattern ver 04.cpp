// c program to print the pattern of a  euilateral triangle
/* User information
  Avinash koshal
  univ. Roll No.-1655/16
  Branch-CSE  */
  #include<stdio.h>
  #include<conio.h>
  int main() {
    int i,j,k;
    int n;
    for(i=1;i<=5;i++){
    k=1;
    for(j=1;j<=9;j++) {                 //  first for loop or outer for loop responsible for number of lines            
    if(j>=6-i&&j<=4+i&&k){             // inner for loop responsible for shape this will work in accordance with outer for loop
    printf("*");
    k=0;
	}
	else{
	printf(" ");
	k=1;
	}
   }  
  printf("\n");
  } 
  getch();
  }
