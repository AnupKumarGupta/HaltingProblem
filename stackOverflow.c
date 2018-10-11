#include<stdio.h> 
  
void fun(int x) 
{ 
    if (x == 1) 
       return; 
   
    fun(x++); 
} 
  
int main() 
{ 
   int x = 5; 
   fun(x); 
   //Stack overflow
} 