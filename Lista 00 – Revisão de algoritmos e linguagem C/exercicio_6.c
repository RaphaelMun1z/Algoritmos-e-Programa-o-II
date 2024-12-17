#include <stdio.h>

int main()
{
    double values[10], ratio;

    printf("Informe o 1° TERMO: ");
    scanf("%lf", &values[0]);

    printf("Informe a RAZÃO: ");
    scanf("%lf", &ratio);

    for (int ii = 1; ii < 10; ii++)
        values[ii] = values[ii-1] + ratio; 

    for (int ii = 0; ii < 10; ii++)
        printf("%d° termo: %.2lf\n", (ii+1), values[ii]);

    return 0;
}