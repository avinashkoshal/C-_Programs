// C code to check that the enetered date is leap year or not
/* User information
Avinash koshal
Univ. Roll.No-1655/16
Branch-CSE
Section-A2 */

#include <stdio.h>
#include<conio.h>
int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);
    if(year%4 == 0)
    {
    if( year%100 == 0)
    {
    if ( year%400 == 0)     // year is divisible by 400, hence the year is a leap year
    printf("%d is a leap year.", year);
    else
    printf("%d is not a leap year.", year);
    }
    else
    printf("%d is a leap year.", year );
    }
    else
    printf("%d is not a leap year.", year);
    
    getch();
}
