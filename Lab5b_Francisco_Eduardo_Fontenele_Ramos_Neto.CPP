#include <stdio.h>
#include <stdlib.h>

/* Cabecalho, declaracao e digitacao do numero de variaveis */

int main ()     // Inicio da funcao main
{

    char c, carac, lixo;
    int estado, i, n;

    printf ("R E C O N H E C I M E N T O   D E   C O N S T A N T E S   N U M E R I C A S");
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

            case 1:  // Teste do caractere no estado 1

                switch (carac)
                {
                case '+':
                    estado = 2;
                    break;
                case '-':
                    estado = 2;
                    break;
                case '.':
                    estado = 4;
                    break;
                case '0':
                    estado = 3;
                    break;
                case '1':
                    estado = 3;
                    break;
                case '2':
                    estado = 3;
                    break;
                case '3':
                    estado = 3;
                    break;
                case '4':
                    estado = 3;
                    break;
                case '5':
                    estado = 3;
                    break;
                case '6':
                    estado = 3;
                    break;
                case '7':
                    estado = 3;
                    break;
                case '8':
                    estado = 3;
                    break;
                case '9':
                    estado = 3;
                    break;
                default:
                    estado = 9;
                }
                break;

            case 2:   // Teste do caractere no estado 2

                switch (carac)
                {
                case '.':
                    estado = 4;
                    break;
                case '0':
                    estado = 3;
                    break;
                case '1':
                    estado = 3;
                    break;
                case '2':
                    estado = 3;
                    break;
                case '3':
                    estado = 3;
                    break;
                case '4':
                    estado = 3;
                    break;
                case '5':
                    estado = 3;
                    break;
                case '6':
                    estado = 3;
                    break;
                case '7':
                    estado = 3;
                    break;
                case '8':
                    estado = 3;
                    break;
                case '9':
                    estado = 3;
                    break;
                default:
                    estado = 9;
                }
                break;

            case 3:   // Teste do caractere no estado 3

                switch (carac)
                {
                case '.':
                    estado = 5;
                    break;
                case 'e':
                    estado = 6;
                    break;
                case 'E':
                    estado = 6;
                    break;
                case '0':
                    estado = 3;
                    break;
                case '1':
                    estado = 3;
                    break;
                case '2':
                    estado = 3;
                    break;
                case '3':
                    estado = 3;
                    break;
                case '4':
                    estado = 3;
                    break;
                case '5':
                    estado = 3;
                    break;
                case '6':
                    estado = 3;
                    break;
                case '7':
                    estado = 3;
                    break;
                case '8':
                    estado = 3;
                    break;
                case '9':
                    estado = 3;
                    break;
                default:
                    estado = 9;
                }
                break;

            case 4: // Teste do caractere no estado 4

                switch (carac)
                {
                case '0':
                    estado = 5;
                    break;
                case '1':
                    estado = 5;
                    break;
                case '2':
                    estado = 5;
                    break;
                case '3':
                    estado = 5;
                    break;
                case '4':
                    estado = 5;
                    break;
                case '5':
                    estado = 5;
                    break;
                case '6':
                    estado = 5;
                    break;
                case '7':
                    estado = 5;
                    break;
                case '8':
                    estado = 5;
                    break;
                case '9':
                    estado = 5;
                    break;
                default:
                    estado = 9;
                }
                break;

            case 5: // Teste do caractere no estado 5

                switch (carac)
                {
                case 'e':
                    estado = 6;
                    break;
                case 'E':
                    estado = 6;
                    break;
                case '0':
                    estado = 5;
                    break;
                case '1':
                    estado = 5;
                    break;
                case '2':
                    estado = 5;
                    break;
                case '3':
                    estado = 5;
                    break;
                case '4':
                    estado = 5;
                    break;
                case '5':
                    estado = 5;
                    break;
                case '6':
                    estado = 5;
                    break;
                case '7':
                    estado = 5;
                    break;
                case '8':
                    estado = 5;
                    break;
                case '9':
                    estado = 5;
                    break;
                default:
                    estado = 9;
                }
                break;

            case 6: // Teste do caractere no estado 6

                switch (carac)
                {
                case '+':
                    estado = 7;
                    break;
                case '-':
                    estado = 7;
                    break;
                case '0':
                    estado = 8;
                    break;
                case '1':
                    estado = 8;
                    break;
                case '2':
                    estado = 8;
                    break;
                case '3':
                    estado = 8;
                    break;
                case '4':
                    estado = 8;
                    break;
                case '5':
                    estado = 8;
                    break;
                case '6':
                    estado = 8;
                    break;
                case '7':
                    estado = 8;
                    break;
                case '8':
                    estado = 8;
                    break;
                case '9':
                    estado = 8;
                    break;
                default:
                    estado = 9;
                }
                break;

            case 7: // Teste do caractere no estado 7

                switch (carac)
                {
                case '0':
                    estado = 8;
                    break;
                case '1':
                    estado = 8;
                    break;
                case '2':
                    estado = 8;
                    break;
                case '3':
                    estado = 8;
                    break;
                case '4':
                    estado = 8;
                    break;
                case '5':
                    estado = 8;
                    break;
                case '6':
                    estado = 8;
                    break;
                case '7':
                    estado = 8;
                    break;
                case '8':
                    estado = 8;
                    break;
                case '9':
                    estado = 8;
                    break;
                default:
                    estado = 9;
                }
                break;

            case 8: // Teste do caractere no estado 8

                switch (carac)
                {
                case '0':
                    estado = 8;
                    break;
                case '1':
                    estado = 8;
                    break;
                case '2':
                    estado = 8;
                    break;
                case '3':
                    estado = 8;
                    break;
                case '4':
                    estado = 8;
                    break;
                case '5':
                    estado = 8;
                    break;
                case '6':
                    estado = 8;
                    break;
                case '7':
                    estado = 8;
                    break;
                case '8':
                    estado = 8;
                    break;
                case '9':
                    estado = 8;
                    break;
                default:
                    estado = 9;
                }
                break;

            case 9: // Acao para o estado 9 (dispensavel)

                estado = 9;
                break;
            }

        /* Escrita do resultado do teste */

        if (estado == 3 || estado == 5 || estado == 8)
            printf ("\n\tCadeia aprovada!");
        else
            printf ("\n\tCadeia reprovada!");
    }

    /* Fechamento da tela */

    printf ("\n\n");
    system ("pause");
    return 0;

}  /* Fim da funcao main e do programa */
