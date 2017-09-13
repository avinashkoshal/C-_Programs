// C code to find the reverse of an array
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */
#include<stdio.h>
#include<conio.h>
int main() {
	int a[20],b[20],i,j,n;           // declaration of the variables
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<=n;i++) {
	scanf("%d",&a[i]);
	}
	for(i=n-1,j=0;i>=0;i--,j++)   // inverted for loop
    b[j]=a[i];
    for(i=0;i<=n;i++)
    a[i]=b[i];               //copy reversed array into original 
    printf("Reverse of array is=");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    getch();
}
