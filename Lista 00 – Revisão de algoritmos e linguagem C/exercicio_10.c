#include <stdio.h>
#include <string.h>

void getMenu()
{
    printf("\n--- MENU ---\n");
    printf("[1] Adição\n");
    printf("[2] Subtração\n");
    printf("[3] Multiplicação\n");
    printf("[4] Divisão\n");
    printf("[5] Resto da divisão\n");
    printf("[0] Sair\n");
}

double number1, number2;

void askValues()
{
    printf("Informe o primeiro número: ");
    scanf("%lf", &number1);

    printf("Informe o segundo número: ");
    scanf("%lf", &number2);
}

double sum(double n1, double n2)
{
    return n1 + n2;
}

double subtraction(double n1, double n2)
{
    return n1 - n2;
}

double multiplication(double n1, double n2)
{
    return n1 * n2;
}

double division(double n1, double n2)
{
    return n1 / n2;
}

int restDivision(double n1, double n2)
{
    double divisionResult = division(n1, n2);
    int wholePart = (int)divisionResult;
    return (n1 - (wholePart * n2));
}

int main()
{
    int option;

    do
    {
        getMenu();
        printf("Sua opção: ");
        scanf("%d", &option);
        printf("\n");

        switch (option)
        {
        case 0:
            printf("Saindo...");
            break;

        case 1:
            askValues();
            printf("%.2lf + %.2lf = %.2lf\n", number1, number2, sum(number1, number2));
            break;

        case 2:
            askValues();
            printf("%.2lf - %.2lf = %.2lf\n", number1, number2, subtraction(number1, number2));
            break;

        case 3:
            askValues();
            printf("%.2lf * %.2lf = %.2lf\n", number1, number2, multiplication(number1, number2));
            break;

        case 4:
            askValues();
            printf("%.2lf / %.2lf = %.2lf\n", number1, number2, division(number1, number2));
            break;

        case 5:
            askValues();
            printf("%.2lf %% %.2lf = %d\n", number1, number2, restDivision(number1, number2));
            break;

        default:
            printf("Valor inválido!\n");
            break;
        }
    } while (option != 0);

    return 0;
}