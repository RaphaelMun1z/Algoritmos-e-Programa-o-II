#include <stdio.h>

int main()
{
    int solvedProblems[12], firstSolvedProblems = 0, firstPeopleAmount = 0, secondSolvedProblems = 0, secondPeopleAmount = 0;

    for (int ii = 0; ii < 12; ii++){
        printf("Número de problemas resolvidos: ");
        scanf("%d", &solvedProblems[ii]);
    }

    for (int ii = 0; ii < 12; ii++) {
        if (solvedProblems[ii] > firstSolvedProblems) {
            secondSolvedProblems = firstSolvedProblems;
            secondPeopleAmount = firstPeopleAmount;
            firstSolvedProblems = solvedProblems[ii];
            firstPeopleAmount = 1;
        } else if (solvedProblems[ii] == firstSolvedProblems) {
            firstPeopleAmount++;
        } else if (solvedProblems[ii] > secondSolvedProblems) {
            secondSolvedProblems = solvedProblems[ii];
            secondPeopleAmount = 1;
        } else if (solvedProblems[ii] == secondSolvedProblems) {
            secondPeopleAmount++;
        }
    }

    printf("Primeiro lugar: %d (%d alunos)\n", firstSolvedProblems, firstPeopleAmount);
    printf("Segundo lugar: %d (%d alunos)\n", secondSolvedProblems, secondPeopleAmount);

    return 0;
}