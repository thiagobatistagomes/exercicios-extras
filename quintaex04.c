#include <stdio.h>

/*
    Escreva, em linguagem C pura, um programa que leia as dimensões (linha e coluna) de uma matriz e, em seguida, leia os seus elementos (inteiros). Repita este procedimento para uma segunda matriz. Caso seja possível somar as duas matrizes, imprima na tela a matriz soma. Caso contrário, imprima a mensagem "impossível" (sem aspas/acentos). Na impressão, cada linha da matriz deve estar em uma linha na tela, e os elementos em cada linha separados entre si por um único espaço.
*/


int main ()
{
    int Lin, Col, Lin1, Col1, Lin2, Col2;
    int i, j;

    //lendo os valores da linha e coluna

    scanf("%d %d", &Lin1, &Col1);

    //declarando a primeira matriz

    int x[Lin1][Col1];

    //lendo os valores da primeira matriz

    for(i = 0; i < Lin1; i++)
    {
        for(j = 0; j < Col1; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }

    //lendo os novos valores da linha e coluna

    scanf("%d %d", &Lin2, &Col2);

    //declarando  a segunda matriz

    int y[Lin2][Col2];

    //lendo os valores da segunda matriz

    for(i = 0; i < Lin2; i++)
    {
        for(j = 0; j < Col2; j++)
        {
            scanf("%d", &y[i][j]);
        }
    }

    //verificando se e possivel somar as duas matrizes


    if(Lin1 == Lin2 && Col1 == Col2)
    {
        Lin = Lin1;
        Col = Col1;
        int soma[Lin][Col];
        //soma das matrizes
        for(i = 0; i < Lin; i++)
        {
            for(j = 0; j < Col; j++)
            {
                soma[i][j] = x[i][j] + y[i][j];
            }
        }
        //imprimindo a matriz
        for(i = 0; i < Lin; i++)
        {
            for(j = 0; j < Col; j++)
            {
                printf("%d ", soma[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("impossivel");
    }


    return 0;
}