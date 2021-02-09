#include <stdio.h>
#include <math.h>

float point_distance(int a, int b, int c, int d, float (*doori)(int x1, int x2, int y1, int y2)) //This is way to take function as argumment
{
    return doori(a, b, c, d);       //after accepting the value from function doori return that value to main function
}
float doori(int x1, int x2, int y1, int y2)
{                                                          //firstly this function will execute and return root of the distance b/w given coordinate

    float r;
    r = pow((y2 - y1), 2) + pow((x2 - x1), 2);
    return sqrt(r);
}
int main()
{
    int x1, x2, y1, y2;
    float distance;
    printf("Enter the first coordinate of x-axis: ");
    scanf("%d", &x1);

    printf("Enter the second coordinate of x-axis: ");
    scanf("%d", &x2);

    printf("Enter the first coordinate of y-axis: ");
    scanf("%d", &y1);

    printf("Enter the second coordinate of y-axis: ");
    scanf("%d", &y2);
    distance = point_distance(x1, x2, y1, y2, doori);
    printf("The distance b/w these two point is :%f", distance);
    return 0;
}
