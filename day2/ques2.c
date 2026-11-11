/* Write a program to calculate the area and circumference of a circle given its radius. */
#include <stdio.h>

int main() {
    double radius;
    scanf("%lf", &radius);
    printf("Area=%.2f, Circumference=%.2f\n", 3.14159 * radius * radius, 2 * 3.14159 * radius);
    return 0;
}
