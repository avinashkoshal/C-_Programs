// c program to print the pattern of digitss in the form of a inverted right angle triangle
/* User information
  Avinash koshal
  univ. Roll No.-1655/16
  Branch-CSE  */
  #include<stdio.h>
  #include<conio.h>
    int main() {
  	int i,j;
  	int n;
  	printf("Enter the number of lines");         // this will be the number of lines or rows
    scanf("%d",&n);
  	for(i=n;i>=1;i--){                          //  first for loop or outer for loop responsible for number of lines
  		for(j=i;j>=1;j--) {                    // inner for loop responsible for shape this will work in accordance with outer for loop
  		printf("%d",j);
	  }
   printf("\n");
  } 
  getch();
  }
