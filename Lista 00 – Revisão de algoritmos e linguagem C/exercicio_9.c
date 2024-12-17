#include <stdio.h>
#include <string.h>

void getUser(char name[], int age, double height){
    printf("--- Detalhes do usuário ---\n");
    printf("NOME: %s\n", name);
    printf("IDADE: %d\n", age);
    printf("ALTURA: %.2lf\n", height);
}

int main()
{
    char name[50];
    int age;
    double height;

    printf("Informe o NOME: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Informe a IDADE: ");
    scanf("%d", &age);

    printf("Informe a ALTURA: ");
    scanf("%lf", &height);

    getUser(name, age, height);

    return 0;
}