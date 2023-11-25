#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int numeros[5];
    int pares = 0;
    int impares = 0;
    int somaImpar = 0;
    int positivos = 0;
    int negativos = 0;
    float mediaPares = 0;
    int somaPares = 0;
    float mediaTodos = 0;
    int somaTodos = 0;
    int maiorNumero = 0;
    int menorNumero = 99999;
    int quantidade = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);

        quantidade++;
        somaTodos += numeros[i];

        if (numeros[i] % 2 == 0)
        {
            pares++;
            somaPares += numeros[i];
        }
        else
        {
            impares++;
            somaImpar += numeros[i];
        }

        if (numeros[i] > 0)
        {
            positivos++;
        }
        else
        {
            negativos++;
        }

        maiorNumero = numeros[i] > maiorNumero ? numeros[i] : maiorNumero;
        menorNumero = numeros[i] < menorNumero ? numeros[i] : menorNumero;
    }

    if (pares > 0)
    {
        mediaPares = somaPares / (float) pares;
    }

    mediaTodos = somaTodos / (float) i;

    for (i = 0; i < 5; i++)
    {
        printf("%d� n�mero: %d\n", i + 1, numeros[i]);
    }

    printf("\nQuantidade de n�meros �mpares: %d\n", impares);
    printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("Quantidade de n�meros negativos: %d\n", negativos);
    printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("Maior n�mero: %d\n", maiorNumero);
    printf("Menor n�mero: %d\n", menorNumero);
    printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("M�dia de n�meros pares: %.1f\n", mediaPares);
    printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("M�dia dos n�meros inseridos: %.1f\n", mediaTodos);

    return 0;
}