// c program to print the address and value of integer
/* User information
  Avinash koshal
  univ. Roll No.-1655/16
  Branch-CSE  */
  #include<stdio.h>
  #include<conio.h>
  int main() {
    int a=5,b=4,c=9;
    printf("address of a=%u\n",&a);   // in printf & operator is used to find out the address and %u denotes unsigned integer
    printf("value of a=%d\n",a);
    printf("address of b=%u\n",&b);
    printf("value of b=%d\n",b);
    printf("address of c=%u\n",&c);
    printf("value of c=%d\n",c);
    getch();
  }
