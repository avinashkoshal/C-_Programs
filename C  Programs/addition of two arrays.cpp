// C code to add two arrays
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */
#include<stdio.h>   // Headerphiles
#include<conio.h>
int main() {
	int a[30],b[30],sum[30];                       //declaration of a character type variable
	int i,n;
	printf("enter the value of n");              // size of array
	scanf("%d",&n);
	printf("enter the elements of first array"); 
	for(i=0;i<=n;i++) {
		scanf("%d",&a[i]);                     // storing the elements of 1st array
	}
	printf("enter the element of 2nd array");
	for(i=0;i<=n;i++) {
		scanf("%d",&b[i]);                  // storing the elements of 2nd array
	}
		for(i=0;i<=n;i++) {
	sum[i]=a[i]+b[i];                     //formula
}
	for(i=0;i<=n;i++) {
	printf("the sum of two arrays =%d\n",sum[i]);  //fetching result 
	}

getch();
}
