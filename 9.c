#include <stdio.h> 

int fib(int x1) 
{ 
 if (x1==0||x1==1) 
   return x1; 
 else 
   return fib(x1-1)+fib(x1-2);  
} 

int main() 
{ 
 int x1, i; 
 printf("Imput a number: "); 
 scanf("%i", &x1); 
 for (i=1;i<x1+1;++i)
   printf("%i:%i\n", i, fib(i)); 
 return 0; 
}
