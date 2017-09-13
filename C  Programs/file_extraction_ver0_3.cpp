


/*
This program extract the text file and after that Stores the word of that file into an array and finally give output of the words that are stored in the array
*/
/* user information
Avinash koshal
Univ.Roll.No-1655/16
Branch-CSE */
#include <stdio.h>
#include<conio.h>
int main() {
    char in_name[15]; //stores input file name
    FILE *in_file;//declaration of a pionter which points to the file
    char word[15]; // allocates space for 15 characters
	char wordArray[15][15]; //declaration of a 2-D array 
    int a[15]; // declaration of a 1-D array
    int i=0, j=0;
    printf("Enter file name:\n");
    scanf("%s", in_name);
    in_file = fopen(in_name, "r"); // opening the file in the read mode
    if (in_file == NULL)          // if statement 
    printf("file not found\n", in_name);
    else {
    while (fscanf(in_file, "%s", word) != EOF)
    {
    printf("%s\n", word);
    for(i=0;i<15;i++){
    wordArray[j][i]=word[i];
	}
	j++;
    }
    fclose(in_file);
    for(j=0; j<15; j++) { 
    printf("%s",wordArray[j]);
    }
    }
    getch();
} 
