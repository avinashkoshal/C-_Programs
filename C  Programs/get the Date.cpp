// C code to get the date
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */
#include<stdio.h>
#include<conio.h>
#include<dos.h>
 
int main(){
   struct date d;
   getdate(&d);    // system dfined it will exract the current system date 
   printf("Current system date is %d/%d/%d",d.da_day,d.da_mon,d.da_year);
   getch();
}
