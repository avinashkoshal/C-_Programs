// c program to convert Binary to decimal
/* User informationer
  Avinash koshal
  univ. Roll No.-1655/16
  Branch-CSE  */
  #include<stdio.h>
  #include<conio.h>
  int main(){
  	long int binaryNumber,decimalNumber=0,j=1,remainder;    //declaration of variables
     printf("Enter any binary number:"); 
     scanf("%ld",&binaryNumber); 
 while(binaryNumber!=0) {                      // while loop  Test condition
     remainder=binaryNumber%10; 
     decimalNumber=decimalNumber+remainder*j; // Statement 
 j=j*2;                                      // Increment
      binaryNumber=binaryNumber/10; 
 } 

    printf("Equivalent decimal value: %ld", decimalNumber); 
getch(); 
}
