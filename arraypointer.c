#include <stdio.h>
void add(int a, int b)
{
    printf("Addition is :%d\n", a + b);
}
void subtract(int a, int b)
{
    printf("Subtraction i: %d\n", a - b);
}
void multiply(int a, int b)
{
    printf("Multiplication is :%d\n", a * b);
}
void divide(int a, int b)
{
    printf("Remainder is: %d\nQuotient is :%d", a%b,a/b);
}
int main()
{
    // fun_ptr_arr is an array of function pointers
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply,divide};
    unsigned int ch, a, b;
    printf("Pls enter only integer value to do calculation\n");
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);
    printf("\nEnter Choice: 0 for add, 1 for subtract , 2 for multiply and 3 for divide:");
    scanf("%d", &ch);

    if (ch > 3)
        return 0;

    (*fun_ptr_arr[ch])(a, b);

    return 0;
}