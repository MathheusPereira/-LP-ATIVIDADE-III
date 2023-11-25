#include <stdio.h>

int main()
{
    char aluno[5][200];
    float notas[5][3];
    int idade[5];
    int i, j;
    int somaNotas = 0;
    float media[3];

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o nome do aluno: ");
        gets(aluno[i]);

        printf("Digite a idade do aluno: ");
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite uma nota: ");
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j];
        }

        media[i] = somaNotas / (float)j;
        somaNotas = 0;

        fflush(stdin);
    }

    system("cls || clear");

    printf("\nExibindo dados dos alunos: \n");

    for (i = 0; i < 5; i++)
    {
        printf("\nAluno: %s \n", aluno[i]);

        printf("Idade: %d\n", idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Nota: %.1f \n", notas[i][j]);
        }

        printf("Média: %1.f \n", media[i]);

        if (media[i] >= 7)
        {
            printf("APROVADO! \n");
        }
        else if (media[i] >= 5)
        {
            printf("RECUPERAÇÃO! \n");
        }
        else
        {
            printf("REPROVADO! \n");
        }
    }

    return 0;
}