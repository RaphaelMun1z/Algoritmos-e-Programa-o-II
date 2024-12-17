#include <stdio.h>

int main()
{
    double base, height, area;

    printf("Informe a BASE: ");
    scanf("%lf", &base);

    printf("Informe a ALTURA: ");
    scanf("%lf", &height);

    area = (base * height) / 2;

    printf("Área desse triângulo: %.2lf", area);

    return 0;
}