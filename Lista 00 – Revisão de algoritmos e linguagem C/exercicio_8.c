#include <stdio.h>

int main()
{
    double values[5];

    for (int ii = 0; ii < 5; ii++){
        printf("Número: ");
        scanf("%lf", &values[ii]);
    }

    for (int ii = 0; ii < 5; ii++)
        printf("%.3lf\n", values[ii]);

    return 0;
}