#include <stdio.h>

int main()
{
    double values[6], largestNumber;

    printf("Informe o 1° número: ");
    scanf("%lf", &values[0]);
    largestNumber = values[0];

    int ii = 1;
    while(ii < 6){
        printf("Informe o %d° número: ", (ii+1));
        scanf("%lf", &values[ii]);

        if(values[ii] > largestNumber)
            largestNumber = values[ii];

        ii++;
    }

    printf("Maior: %.2lf", largestNumber);

    return 0;
}