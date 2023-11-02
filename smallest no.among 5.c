//write a program to check the smallest number among the five numbers
#include <stdio.h>

int main() 
{
    double a, b, c ,d ,e;

    printf("Enter five numbers (a, b, c, d, e): ");
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);

    // Assume a is the smallest initially
    double smallest = a;

    // Check if b is smaller than the current largest and smallest
    if (b < smallest) {
        smallest = b;
    }

    // Check if c is smaller than the current largest and smallest
    if (c < smallest) {
        smallest = c;
    }
    // Check if d is smaller than the current largest and smallest
    if (c < smallest) {
        smallest = d;
    }
    // Check if e smaller than the current largest and smallest
    if (c < smallest) {
        smallest = e;
    }
    printf("The smallest number is: %.2lf\n", smallest);
    return 0;
}