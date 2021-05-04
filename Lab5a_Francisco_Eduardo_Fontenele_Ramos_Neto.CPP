#include <stdio.h>
#include <stdlib.h>

/* Cabecalho, declaracao e digitacao do numero de variaveis */

int main ()     // Inicio da funcao main
{

    char c, carac, lixo;
    int estado, i, n;

    printf ("R E C O N H E C I M E N T O   D E   C A D E I A S   C O N T E N D O   C O M E N T A R I O S");
    printf ("\n\nNumero de cadeias a serem testadas: ");
    scanf ("%d%c", &n, &lixo);

    for (i = 1; i <= n; i++)
    {

        /* Digitacao da cadeia a ser testada */

        printf ( "\n\nDigite a %da cadeia encerrada por <enter>: ", i);

        /* Percurso no automato usando os caracteres da cadeia */

        for (estado = 1, scanf("%c", &carac); carac != '\n'; scanf("%c", &carac))

            switch (estado)
            {

            case 1:   // Teste do caractere no estado 1

                switch (carac)
                {

                case '/':
                    estado = 2;
                    break;
                default:
                    estado = 1;
                }
                break;

            case 2:   // Teste do caractere no estado 2

                switch (carac)
                {

                case '*':
                    estado = 3;
                    break;
                case '/':
                    estado = 2;
                default:
                    estado = 1;
                }
                break;

            case 3:   // Teste do caractere no estado 3

                switch (carac)
                {

                case '*':
                    estado = 4;
                    break;
                default:
                    estado = 3;
                }
                break;

            case 4: // Teste do caractere no estado 4

                switch (carac)
                {

                case '/':
                    estado = 5;
                    break;
                case '*':
                    estado = 4;
                    break;
                default:
                    estado = 3;
                }
                break;

            case 5: // Acao para o estado 5 (dispensavel)

                estado = 5;
                break;
            }

        /* Escrita do resultado do teste */

        if (estado == 5)
            printf ("\n\tCadeia aprovada!");
        else
            printf ("\n\tCadeia reprovada!");
    }

    /* Fechamento da tela */

    printf ("\n\n");
    system ("pause");
    return 0;

}  /* Fim da funcao main e do programa */
