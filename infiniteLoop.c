#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
        if(argc < 2){ printf("Please input enclosed in double quotes\n"); exit(0);}
        int x = 0;  
        while(x == 0)
        {
            printf("Output: %s\n",argv[1]);
        }
}