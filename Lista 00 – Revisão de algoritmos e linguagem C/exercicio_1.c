#include <stdio.h>

int main()
{
    int A, B;

    printf("Informe A: ");
    scanf("%d", &A);

    printf("Informe B: ");
    scanf("%d", &B);

    if (A >= 0 && B >= 0)
    {
        int tempA = A;
        A = B;
        B = tempA;
    }

    printf("Valor de A: %d\n", A);
    printf("Valor de B: %d\n", B);

    return 0;
}