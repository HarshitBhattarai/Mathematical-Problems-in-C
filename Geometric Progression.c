#include <stdio.h>
#include <math.h>
int main() {
    float first term, common ratio;
    int num terms, j;

    printf("Enter the first term (a): ");
    scanf("%f", &first term);
    
    printf("Enter the common ratio (r): ");
    scanf("%f", &common ratio);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &num terms);
    
    
    printf("Geometric Progression:\n");
    for (j = 0; j < num terms; j++) 
	{
    printf("%.2f ", first term * pow(common ratio, j));
    }
    printf("\n");

    return 0;
}
