// C proram to Display months
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include<stdio.h>
#include<conio.h>
int main() {
	int i,n;   // Declaration of integer type variable
    printf("enter the no. of the day");
    scanf("%d",&n);
    switch(n) {                      // Case control structure
        case 1:
    	printf("jan");
    	break;                     // it is used to jump out of the loop instsntly 
    	case 2:
    	printf("feb");
    	break;
    	case 3:
    	printf("march");
    	break;
    	case 4:
    	printf("Apr");
    	break;
        case 5:
        printf("May");
        break;
    	case 6:
    	printf("june");
    	break;
    	case 7:
    	printf("July");
    	break;
    	case 8:
    	printf("Aug");
    	break;
    	case 9:
    	printf("Sept.");
    	break;
   		case 10:
   		printf("Oct");
   		break;
    	case 11:
    	printf("Nov");
    	break;
    	case 12:
        printf("Dec");
        break;
		}
	
	getch();
}
