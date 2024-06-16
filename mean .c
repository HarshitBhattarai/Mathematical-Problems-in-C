#include <stdio.h>
int main() 
{
    int n, i;
    float sum = 0, mean;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
    int num;
    scanf("%d", &num);
    sum += num;
    }
    mean = sum / n;
    printf("Mean = %.2f\n", mean);
    
    return 0;
}