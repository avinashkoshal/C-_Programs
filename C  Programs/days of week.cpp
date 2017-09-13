// C proram to Display the days of week
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	int n;
	printf("enter the no. of Day");
	scanf("%d",&n);
	switch(n) {      // Decision control statement
		case 1:
    	printf("\nmonday");
    	break;     // It is used to jump out of the loop instantly
		case 2:
	    printf("\ntuesday"); 
	    break;
     	case 3:	
		printf("\nwednesday");
	    break;
        case 4:	
		printf("\nthursday");
		break;
        case 5:	
		printf("\nfriday");
		break;
     	case 6:		
		printf("\nsaturday");
		break;
        case 7:			
		printf("\nsunday");
				
	}
	  getch();
}
