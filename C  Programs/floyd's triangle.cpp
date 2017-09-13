// c program to print the Floyd's Triangle
/* User informationer
  Avinash koshal
  univ. Roll No.-1655/16
  Branch-CSE  */
  #include<stdio.h>
  #include<conio.h>
  int main(){
  int i,j,k=0,n;
  printf("enter the value of n");    // this will be the number of lines or rows
  scanf("%d",&n);
  for(i=1;i<=n;i++){             //  first for loop or outer for loop responsible for number of lines
  for(j=1;j<=i;j++){            // inner for loop responsible for shape this will work in accordance with outer for loop
  	printf("%d",k+j);
  }
  ++k;
  printf("\n");
  }
  getch();
  }
