#include <stdio.h>

int main() {
    float x1, y1, x2, y2;
    float slope, yintercept;
    printf("Enter coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    slope = (y2 - y1) / (x2 - x1);
    yintercept = y1 - slope * x1;
    if (yintercept >= 0) 
	{
    printf("The equation of the line is: y = %.2fx + %.2f", slope, yintercept);
    } else {
    printf("The equation of the line is: y = %.2fx - %.2f", slope, yintercept);
    }

    return 0;
}
