#include <stdio.h>
int main() 
{
    int firstterm, commondiff, numterms;
    float sum;
    printf("Enter the first term (a): ");
    scanf("%d", &firstterm);

    printf("Enter the common difference (d): ");
    scanf("%d", &commondiff);

    printf("Enter the number of terms (n): ");
    scanf("%d", &numterms);
    sum = (numterms / 2.0) * (2 * firstterm + (numterms - 1) * commondiff);
    
    printf("Sum of the arithmetic series is: %.2f", sum);

    return 0;
}
