//ALUNO: FRANCISCO EDUARDO FONTENELE RAMOS NETO
//TURMA: 25.2
//LAB2: ELABORACAO DE TABELAS
//PROGRAMA COMPILADO COM CODEBLOCKS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    //DECLARACAO DE VARIAVEIS

    int x, m, n;

    //INPUT DOS LIMITES SUPERIOR E INFERIOR DA TABELA

    printf ("Digite os limites superior e inferior da tabela: ");
    scanf  ("%d%d", &m, &n);

    //OUTPUT DO CABECALHO DA TABELA

    printf ("\n%105s","*******************************************************************************************");
    printf ("\n%105s","*       x *     x^4 - 20x^2 + 5 *                  sen(x) *                     x^7/ln(x) *");
    printf ("\n%105s","*-----------------------------------------------------------------------------------------*");

    x = m;

    while (x <= n) {

            //OUTPUT DOS VALORES FORNECIDOS PELAS FUNÇÕES TABELADAS

            printf("\n%15s", "*");

   		if (x >= 2)
                    printf ("%8d *%20d *%24.8f *%30.8f *", x, x*x*x*x - 20*x*x + 5, sin(x*3.14159/180), pow(x,7)/log(x));
      	else
                    printf ("%8d *%20d *%24.8f *%32s", x, x*x*x*x - 20*x*x + 5, sin(x*3.14159/180), "--------- *");
		x = x + 1;

	}

	printf ("\n%105s","*******************************************************************************************");

    printf("\n\n");
    system("pause");
    return 0;

    //FINALIZAR
}
