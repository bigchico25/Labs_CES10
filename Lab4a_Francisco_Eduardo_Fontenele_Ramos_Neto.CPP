#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int n, i, achou;
    char c, lixo;

    printf("DIVISORES DE VARIOS NUMEROS INTEIROS\n");

    do
    {
        printf("\nDivisores de um numero?(s/n): \n\n");

        do
        {
            scanf("%c", &c);

        }
        while (c != 's' && c != 'n' && c != 'S' && c != 'N');

        if (c == 's' || c == 'S')
        {
            printf("\nDigite um numero maior que 1: \n\n");
            scanf("%d", &n);

            while (n < 2)
            {
                printf("\nNumero improprio; digite novamente: \n\n");
                scanf("%d", &n);
            }

            printf("\nDivisores de %d: \n", n);

            i = 2;
            achou = 0;

            while (i <= n/2)
            {
                if (n % i == 0)
                {
                    printf("\n\t%d \n", i);
                    achou = 1;
                }

                i = i + 1;

            }

            if (achou == 0)
                printf("\n\t%d eh um numero primo\n", n);

        }

    }
    while (c == 's' || c == 'S');

    printf("\n\n");
    system("pause");
    return 0;
}
