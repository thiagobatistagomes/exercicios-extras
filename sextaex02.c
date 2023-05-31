#include <stdio.h>

/*
    Na matemática, uma combinação simples pode ser definida como sendo um agrupamento dos elementos de um conjunto em subconjuntos. Na combinação, a ordem dos elementos não é considerada na formação dos subconjuntos, ou seja, os subconjuntos {A, B} e {B, A} são iguais, sendo considerados uma única vez na contagem da quantidade de combinações. A fórmula geral para encontrar as quantidades de combinações simples de um conjunto é representada, na matemática, por: C(N, P) = N! / [P! * (N – P)!], onde N é a quantidade total de elementos do conjunto inicial e P é a quantidade de elementos de cada subconjunto. Escreva, em linguagem C pura, um programa que leia os valores de N e P informados pelo usuário e imprima como resposta o valor da combinação simples. Não deixe o usuário inserir valores inválidos para N e P, ou seja, zero ou negativos.
*/

int main ()
{
    int N, P, i;
    int Nfat, Pfat, NP, NPfat;

    //lendo os valores de N e P
    do
    {
        scanf("%d %d", &N, &P);
    } while (N <= 0 && P <= 0);
    

    //N fatorial
    Nfat = 1;
    for(i = 2; i <= N; i++)
    {
        Nfat = Nfat * i;
    }

    //P fatorial
    Pfat = 1;
    for(i = 2; i <= P; i++)
    {
        Pfat = Pfat * i;
    }

    //N - P fatorial
    NP = N - P;
    NPfat = 1;
    for(i = 2; i <= NP; i++)
    {
        NPfat = NPfat * i;
    }

    //aplicando a formula
    printf("%d", Nfat / (Pfat * NPfat));



    return 0;
}