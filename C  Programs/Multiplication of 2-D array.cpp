// C code to find the reverse of an array
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */
#include<stdio.h>
#include<conio.h>
int main() {
int a[3][3],b[3][3],c[3][3];
int i,j,k,sum=0;
printf("enter the elements of first array"); 
for(i=0;i<=2;i++) {
	for(j=0;j<=2;j++) {
	scanf("%d",&a[i][j]); // enter the elements of first array
}
}
printf("enter the elements of 2nd array");
for(i=0;i<=2;i++) {
	for(j=0;j<=2;j++) {
	scanf("%d",&b[i][j]); //enter the elements of 2nd array
}
}
printf("multiplication of A*B=");  // formula used
for(i=0;i<=2;i++) {
	for(j=0;j<=2;j++) {
		for(k=0;k<=2;k++) {
			sum=sum+a[i][k]+b[k][j];
			c[i][j]=sum;
		}
	}
}
for(i=0;i<=2;i++) {
	for(j=0;j<=2;j++) {
		printf("%d\t",c[i][j]); // getting the result
	}
}

		getch();

}
