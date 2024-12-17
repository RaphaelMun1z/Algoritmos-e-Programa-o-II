#include <stdio.h>

double askValue(char msg[])
{
    double num;
    printf("%s", msg);
    scanf("%lf", &num);
    return num;
}

int main()
{
    const int m, n, p;
    printf("Informe a dimensão M: ");
    scanf("%d", &m);

    printf("Informe a dimensão N: ");
    scanf("%d", &n);

    printf("Informe a dimensão P: ");
    scanf("%d", &p);

    double matrizA[m][n], matrizB[n][p], matrizC[m][p];

    printf("--- Matriz A ---\n");
    for (int ii = 0; ii < m; ii++)
        for (int jj = 0; jj < n; jj++)
            matrizA[ii][jj] = askValue("Digite o valor: ");

    printf("\n--- Matriz B ---\n");
    for (int ii = 0; ii < n; ii++)
        for (int jj = 0; jj < p; jj++)
            matrizB[ii][jj] = askValue("Digite o valor: ");

    for (int ii = 0; ii < m; ii++)
        for (int jj = 0; jj < p; jj++)
            matrizC[ii][jj] = 0;

    for (int Clin = 0; Clin < m; Clin++)
        for (int Ccol = 0; Ccol < p; Ccol++)
            for (int ii = 0; ii < n; ii++)
                matrizC[Clin][Ccol] += matrizA[Clin][ii] * matrizB[ii][Ccol];

    printf("\n");

    for (int ii = 0; ii < m; ii++)
    {
        for (int jj = 0; jj < p; jj++)
            printf("%.2lf ", matrizC[ii][jj]);
        printf("\n");
    }

    return 0;
}