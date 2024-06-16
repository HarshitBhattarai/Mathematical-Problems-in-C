#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imaginaryPart;
    printf("Let's solve a quadratic equation of the form ax^2 + bx + c = 0.\n");
    printf("Enter the coefficient 'a': ");
    scanf("%f", &a);

    printf("Enter the coefficient 'b': ");
    scanf("%f", &b);

    printf("Enter the coefficient 'c': ");
    scanf("%f", &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("The equation has two distinct real roots:\n");
    printf("Root 1 = %.2f\n", root1);
    printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
    root1 = root2 = -b / (2 * a);
    printf("The equation has two equal real roots:\n");
    printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
    realPart = -b / (2 * a);
    imaginaryPart = sqrt(-discriminant) / (2 * a);
    printf("The equation has complex roots:\n");
    printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
    printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
