#include <stdio.h>
#include <math.h>

int main()
{
    int a, c,lastdigit, sum = 0;
    printf("Enter the no to get the reverse : ");

    scanf("%d", &a);
    
    while (a!=0)
    {
        lastdigit = a % 10;
        
        sum = sum*10 + lastdigit;
         a = a / 10;
    }
    printf("\nThe reverse of the given no. is : %d", sum);
    return 0;
}