#include<stdio.h> 
int main() 
{ 
   int a; 
   char *x; 
   x = (char *) &a; 
   a = 512;
   
   x[0] = 1;                //Let's assume You are on a machine where an int has 4 bytes. 512 in hex format would be '00 00 02 00'.
                            //On a little endian processor the pointer points to the lowest significant byte. 
                            // To set every byte individually the pointer to int is casted to a pointer to
                            //  char: x = (char *) &a; as a char is always coded in one byte. Now the four bytes are treated as an array
                            //  of four bytes. The lowest significant byte is set to '1' by x[0] = 1; The next byte is set to '2'
                            //  (is it anyway, so the line x[1] = 2; could be skipped) and byte 3 and 4 are untouched 00 and 00.
                            //  'a' is now '00 00 02 01' or 513. Of course in the printf statement 'a' is missing: printf("%d\n",a);
   x[1] = 2; 
   printf("%d\n",a); 
  
   getchar(); 
   return 0; 
}


// C program to find if machine is little 
// endian or big endian. 
// #include <stdio.h> 
  
// int main()  
// { 
//    unsigned int n = 1; 
//    char *c = (char*)&n; 
//    if (*c)     
//        printf("LITTLE ENDIAN"); 
//    else
//        printf("BIG ENDIAN"); 
//    return 0; 
// } 