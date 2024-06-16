#include <stdio.h>
#include <math.h>
int main() 
{
    float side1, side2, hypotenuse;
    printf("Enter length of side 1 (a): ");
    scanf("%f", &side1);
    printf("Enter length of side 2 (b): ");
    scanf("%f", &side2);
    hypotenuse = sqrt(side1 * side1 + side2 * side2);
    printf("Hypotenuse (c) = %.2f", hypotenuse);
    return 0;
}
