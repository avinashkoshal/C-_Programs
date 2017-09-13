// C code to find thr lenght of the string
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */
#include <stdio.h>
int main(){
    char s[1000], i;       
    printf("Enter a string: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; ++i);        // for loop (condition based )
    printf("Length of string: %d", i);   // if the above condition will true then this statement will be executed
    getch();
}
