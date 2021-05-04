//ALUNO: FRANCISCO EDUARDO FONTENELE RAMOS NETO
//TURMA 25.2
//LAB1: COMPRA DE MATERIAL ESCOLAR
//PROGRAMA COMPILADO COM CODEBLOCKS

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //DECLARAÇÃO DE VARIAVEIS

    int aluno, numalunos, numcadernos, numcanetas, numlapis, numborrachas;
    float precocar, precocan, precolapis, precoborrachas;

    //PROPOSITO DO PROGRAMA

    printf("COMPRA DE MATERIAL ESCOLAR:");

    //INPUT DA QUANTIDADE DE ALUNOS

    printf("\n\nDigite o numero de alunos: ");
    scanf("%d", &numalunos);
    printf("\n");
    aluno=1;

    while (aluno<=numalunos)
    {
        //INPUT DAS QUANTIDADES E DOS PRECOS DOS MATERIAIS DO ALUNO

        printf("\n\nAluno %d: \n\n\tNumero de cadernos: ",aluno);
        scanf("%d", &numcadernos);
        printf("\tPreco do caderno: R$");
        scanf("%f", &precocar);

        printf("\n\tNumero de canetas: ");
        scanf("%d", &numcanetas);
        printf("\tPreco da caneta: R$");
        scanf("%f", &precocan);

        printf("\n\tNumero de lapis: ");
        scanf("%d", &numlapis);
        printf("\tPreco do lapis: R$");
        scanf("%f", &precolapis);

        printf("\n\tNumero de borrachas: ");
        scanf("%d", &numborrachas);
        printf("\tPreco da borracha: R$");
        scanf("%f", &precoborrachas);

        //OUTPUT DAS QUANTIDADES E DOS PRECOS DOS MATERIAIS DO ALUNO

        printf("\n\tAluno %d: \n\t\t%d cadernos a R$%g cada", aluno, numcadernos, precocar);
        printf("\n\t\t%d canetas a R$%g cada", numcanetas, precocan);
        printf("\n\t\t%d lapis a R$%g cada", numlapis, precolapis);
        printf("\n\t\t%d borrachas a R$%g cada", numborrachas, precoborrachas);

        //OUTPUT DO GASTO TOTAL DO ALUNO

        printf("\n\n\tGasto total: R$%g", numcadernos*precocar + numcanetas*precocan + numlapis*precolapis + numborrachas*precoborrachas);

        aluno=aluno+1;
    }
    printf("\n\n");
    system("pause");
    return 0;

    //FINALIZAR
}


