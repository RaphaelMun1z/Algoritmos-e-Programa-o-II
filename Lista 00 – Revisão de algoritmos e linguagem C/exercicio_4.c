#include <stdio.h>

int main()
{
    double values[12], largestNumbers[2];

    for (int ii = 0; ii < 12; ii++)
    {
        printf("Informe o %d° número: ", (ii+1));
        scanf("%lf", &values[ii]);

        if(values[ii] > largestNumbers[0]){
            double tempLN = largestNumbers[0];
            largestNumbers[0] = values[ii];
            largestNumbers[1] = tempLN;
        } else if (values[ii] > largestNumbers[1]){
            largestNumbers[1] = values[ii];
        }
    }

    printf("Maiores: %.2lf e %.2lf", largestNumbers[0], largestNumbers[1]);

    return 0;
}