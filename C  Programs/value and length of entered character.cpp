// C code to find the address and length of entered character
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */
#include <stdio.h>
#include<conio.h>
int main(){ 
    char s[1000], i;
    printf("Enter a string: ");
    scanf("%s", &s);
    for(i = 0; s[i] != 0; ++i);        // for loop is used if condition becoms true then the body of the loop will be executed
    printf("address of string =%u\n Length of string: %d",&s, i); // fetching the result
    getch();
}
