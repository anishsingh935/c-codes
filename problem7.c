#include<stdio.h>

void fun(int *p) 
{ 
   int q = 10; 
  p = &q; 
}     
  
int main() 
{ 
  int r = 200000; 
  int *p = &r;      //we have created  a integer pointer which is pointing to address of variable r 
   printf("%d", p);
  fun(p);        // we have send the address of r to function fun
  
  printf("\n%d", p);

  getchar(); 
  return 0;
}