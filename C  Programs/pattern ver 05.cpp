// c program to print the patter of digits in the form of a equilater al triangle
/* User information
  Avinash koshal
  univ. Roll No.-1655/16
  Branch-CSE  */
#include <stdio.h>
#include<conio.h>
int main(){
    int i,j,n, k=0,l = 0,l1 = 0;
    printf("Enter number of rows: ");    // this will be the number of lines or rows
    scanf("%d",&n);
    for(i=1; i<=n; ++i) {               //  first for loop or outer for loop responsible for number of lines
    for(j=1;j<=n-i; ++j) {             // inner for loop responsible for shape this will work in accordance with outer for loop
    printf("  ");
    ++l;
    }
	while(k != 2*i-1){
    if (l <=n-1)  {
    printf("%d ", i+k);
    ++l;
    }
    else{
    ++l1;
    printf("%d ", (i+k-2*l1));
    }
    ++k;
    }
	l1 = l = k = 0;
    printf("\n");
    }
    return 0;
    }
