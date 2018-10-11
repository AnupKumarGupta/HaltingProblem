#include<stdio.h>

#include<stdlib.h>

int main(int argc, char * argv[])

{
    if(argc < 3)
    { 
        printf("Please input an executable and its input enclosed in double quotes\n");
        exit(0);
    }
    char buffer[50];
    snprintf(buffer, sizeof(argv[1]) + sizeof(argv[2]) + 2, "%s %s", argv[1], argv[2]); 
    
    int x = system(buffer);
    // If no output occurs then the given program runs infinitely for given input

    if(x==0) {
        printf("\nYes"); //Execution successful
    } else {
        printf("\nNo"); //Excution stopped due to some error
    }
}