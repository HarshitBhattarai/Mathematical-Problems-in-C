#include <stdio.h>
#include <math.h>

int main() {
    double number, result;
    printf("Enter a number: ");
    scanf("%lf", &number);
    result = cbrt(number);
    printf("Cube root of %.2lf = %.2lf\n", number, result);

    return 0;
}
