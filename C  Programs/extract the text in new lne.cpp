
#include<stdio.h>
int main()
{
    char in_name[80];        // Declaration of char type variable
    FILE *in_file;           // creating a file pointer
    char word[50];
    printf("Enter file name:\n");
    scanf("%s", in_name);
    in_file = fopen(in_name, "r");  // opening the file in readmode
    if (in_file == NULL)           // if condition
    printf("Can't open %s for reading.\n", in_name);
    else  {
    while (fscanf(in_file, "%s", word) != EOF) {    // Read the file tillnull character 
    printf("%s\n", word);                          // creating the null character into new line
    }                           
    fclose(in_file);
    }
    return 0;
}
