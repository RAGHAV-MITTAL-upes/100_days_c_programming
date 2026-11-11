/* Write a program to convert temperature from Celsius to Fahrenheit. */
#include <stdio.h>

int main() {
    double c;
    scanf("%lf", &c);
    printf("Fahrenheit=%.0f\n", (c * 9.0 / 5.0) + 32);
    return 0;
}
