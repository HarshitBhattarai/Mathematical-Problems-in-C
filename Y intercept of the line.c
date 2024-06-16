#include <stdio.h>

int main() {
    float x, y, slope, yintercept;
    printf("Enter the slope (m)");
    scanf("%f", &slope);
    printf("Enter coordinates of a point on the line (x, y)");
    scanf("%f %f", &x, &y);
    yintercept = slope * x;
    printf("The y-intercept (c) of the line is: %.2f", yintercept);

    return 0;
}
