#include <stdio.h>

/*
    Constantes matemáticas são números especiais, normalmente pertencentes ao conjunto dos Reais, significativamente interessantes de algum modo. Constantes estão presentes em diversas áreas da matemática, como as constantes E (2,7182) e Pi (3,1415), usadas na geometria, teoria dos números e no cálculo. Uma dessas constantes é a Constante de Catalan, denotada por G e muito utilizada em estimativas e análise combinatória. Embora a Constante de Catalan ainda não tenha sido provada ser um número irracional, seu valor pode ser aproximado pela seguinte expressão: G = 1 - 1/3² + 1/5² - 1/7² + 1/9² - ... cujo valor se aproxima de 0,9159. Escreva, em linguagem C pura, um programa que leia do usuário a quantidade de termos N e calcule a soma dos N primeiros termos da Constante de Catalan, com precisão de 4 casas decimais. Não deixe o usuário inserir valores inválidos para N, ou seja, zero ou negativos.
*/


int main ()
{
    int N, i, sinal = 1, denominador = 1;
    double G;

    do
    {
        scanf("%d", &N);
    } while (N <= 0);

    G = 0.0;

    for(i = 0; i < N; i++)
    {
        G += sinal * (1.0 / (denominador * denominador));
        sinal = sinal * -1;
        denominador = denominador + 2;
    }

    printf("%.4lf", G);


    return 0;
}