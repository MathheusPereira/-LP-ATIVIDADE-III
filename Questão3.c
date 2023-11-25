#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nomes[99][200];
    char telefones[99][200];
    int i = 0;
    int j = 0;
    int resp = 0;

    do
    {
        printf("1 - Para continuar cadastrando\n");
        printf("2 - Para encerrar e mostrar os números\n");
        scanf("%d", &resp);
        puts("");

        if (resp == 1)
        {
            printf("Digite o %d° nome: ", i + 1);
            scanf("%s", &nomes[i]);

            printf("Digite o %d° telefone: ", i + 1);
            scanf("%s", &telefones[i]);

            fflush(stdin);

            i = i + 1;
        }

    } while (resp == 1);

    system ("cls || clear");

    for (j = 0; j <= i; j++)
    {
        printf("%d° Cadastro\n", j + 1);
        printf("Nome: %s\n", nomes[j]);
        printf("Telefone: %s\n", telefones[j]);

        printf("\n");
    }

    return 0;
}