#include <stdio.h>

int main() {
    float x1, y1, x2, y2;
    float slope;
    printf("Enter x1 and y1 ");
    scanf("%f %f", &x1, &y1);
    printf("Enter x2 and y2 ");
    scanf("%f %f", &x2, &y2);
    slope = (y2 - y1) / (x2 - x1);
    printf("The slope of the line passing through (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", x1, y1, x2, y2, slope);

    return 0;
}
