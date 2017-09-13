// c program to convert decimal  to binary
/* User informationer
  Avinash koshal
  univ. Roll No.-1655/16
  Branch-CSE  */
  #include<stdio.h>
  #include<conio.h>
  int main(){
  	 long int decimalNumber,remainder,quotient; 
     int binaryNumber[100],i=1,j; 
         printf("Enter any decimal number "); 
         scanf("%ld",&decimalNumber); 
        quotient = decimalNumber; 
     while(quotient!=0) {                       // while loop  Test condition
         binaryNumber[i++]= quotient % 2;      // Statement
         quotient = quotient / 2; 
} 
         printf("Equivalent binary value of decimal number %d: ",decimalNumber); 
     for(j = i -1 ;j> 0;j--) 
	     printf("%d",binaryNumber[j]); 
         getch();
     }


