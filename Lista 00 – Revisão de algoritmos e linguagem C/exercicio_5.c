#include <stdio.h>

int main()
{
    double grades[10], highestGrade, lowestGrade, classAverageGrade = 0;
    int numberOfStudents = 10, studentsWithAboveAverageGrades = 0;

    printf("[Algoritmos II] Informe a nota do 1° aluno: ");
    scanf("%lf", &grades[0]);
    classAverageGrade += grades[0];
    highestGrade = grades[0];
    lowestGrade = grades[0];

    for (int ii = 1; ii < numberOfStudents; ii++)
    {
        printf("[Algoritmos II] Informe a nota do %d° aluno: ", (ii+1));
        scanf("%lf", &grades[ii]);
        classAverageGrade += grades[ii];

        if(grades[ii] > highestGrade) highestGrade = grades[ii];
        if(grades[ii] < lowestGrade) lowestGrade = grades[ii];
    }

    classAverageGrade /= numberOfStudents;

    for (int ii = 0; ii < numberOfStudents; ii++)
        if(grades[ii] > classAverageGrade) studentsWithAboveAverageGrades++;

    printf("Maior nota: %.2lf\n", highestGrade);
    printf("Menor nota: %.2lf\n", lowestGrade);
    printf("Nota média da classe: %.2lf\n", classAverageGrade);
    printf("Alunos que tiveram notas acima da média: %d\n", studentsWithAboveAverageGrades);

    return 0;
}