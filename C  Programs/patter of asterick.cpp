// c program to print the pattern of asterick in the form of a right angle triangle
/* User information
  Avinash koshal
  univ. Roll No.-1655/16
  Branch-CSE  */
  #include<stdio.h>
  #include<conio.h>
  int mian() {
  	int i,j;
  	int n;
  	printf("Enter the number of lines");        // this will be the number of lines or rows
    scanf("%d",&n);
  	for(i=1;i<5;i++){                         //  first for loop or outer for loop responsible for number of lines
  		for(j=1;j<=i;j++) {                  // inner for loop responsible for shape this will work in accordance with outer for loop
  		printf("*");
	  }
  printf("\n");
  } 
  getch();
  }
