#include <stdio.h>
#include <limits.h> 

int main() 
{
    int n, num;
    int min = INT_MAX, max = INT_MIN;  
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
    scanf("%d", &num);
    if (num < min) {
    min = num;
    }
    if (num > max) {
    max = num;
    }
    }
    int range = max - min;
    printf("\nRange = %d", range);

    return 0;
}
