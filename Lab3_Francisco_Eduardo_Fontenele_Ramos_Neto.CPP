#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, i, m, maior, menor, fat, k1, k2, fib;
    float soma, cont, somapares, soma3ou7;
    char lixo;

    printf("Digite um numero inteiro positivo seguido de <enter>: ");
    scanf("%d%c", &n, &lixo);

    while (n <= 0)
    {
        printf ("\n\tDigite novamente um numero inteiro positivo seguido de <enter>: ");
        scanf ("%d%c", &n, &lixo);
    }

    soma = 0;
    cont = 0;
    somapares = 0;
    soma3ou7 = 0;

    while (cont < n)
    {
        printf("\nDigite um numero inteiro seguido de <enter>: ");
        scanf("%d%c", &i, &lixo);

        soma = soma + i;
        cont = cont + 1;

        if (i % 2 == 0)
            somapares = somapares + i;

        if (i >= 0 && (i % 3 == 0 || i % 7 == 0))
            soma3ou7 = soma3ou7 + i;

        m = 1;
        fat = 1;

        while (fat < i)
        {
            m = m + 1;
            fat = fat * m;
        }

        if (fat == i)
            printf("\n\t%d eh o fatorial do numero %d\n", i, m);
        else
            printf("\n\t%d nao eh o fatorial de um numero\n", i);

        int aux;

        aux = i;

        if (cont == 1)
        {
            maior = i;
            menor = i;
        }

        if (i > maior)
            maior = aux;

        if (i < menor)
            menor = aux;

        k2 = 0;
        k1 = 0;
        fib = 1;

        while (fib < i)
        {

            k2 = k1;
            k1 = fib;
            fib = fib + k2;

        }

        if (fib == i)
            printf("\n\t%d eh um termo da Serie de Fibonacci\n", i);
        else
            printf("\n\t%d nao eh um termo da Serie de Fibonacci\n", i);

    }

    printf("\n\n\t\tA media aritmetica desses numeros eh: %.3f", soma/cont);
    printf("\n\n\t\tA soma dos numeros pares eh: %.0f", somapares);
    printf("\n\n\t\tA soma dos numeros positivos que sao multiplos de 3 ou 7 eh: %.0f", soma3ou7);
    printf("\n\n\t\tO maior valor relativo eh: %d", maior);
    printf("\n\n\t\tO menor valor relativo eh: %d", menor);

    printf("\n\n");
    system("pause");
    return 0;

}


