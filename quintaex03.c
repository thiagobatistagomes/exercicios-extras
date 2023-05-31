#include <stdio.h>

/*
    Escreva, em linguagem C pura, um programa que leia, em um vetor de números reais, os tempos que 8 atletas marcaram em uma competição de corrida. A seguir, mostre o tempo e em qual posição do vetor se encontram os atletas que receberam medalha de ouro, prata e bronze, sendo as informações do primeiro colocado na primeira linha; na linha seguinte as informações do segundo colocado; e na última linha as informações do terceiro colocado. Separe cada tempo de sua posição por um único espaço.
*/

int main ()
{
    float vet[8], primeiro_menortempo, segundo_menortempo, terceiro_menortempo;
    int i, posicao, temposiguais = 0 ;

    //lendo os tempos dos 8 atletas
    for (i = 0; i < 8; i++)
    {
        scanf("%f", &vet[i]);
    }
    
    if(vet[0] == vet[1] && vet[1] == vet[2] && vet[2] == vet[3] && vet[3] == vet[4] && vet[4] == vet[5] && vet[5] == vet[6] && vet[6] == vet[7])
    {
        temposiguais = 1;
    }
    
    if(temposiguais == 0)
    {
        //primeiro colocado
        primeiro_menortempo = vet[0];
        posicao = 0;
    
        for(i = 0; i < 8; i++)
        {
            if(vet[i] < primeiro_menortempo)
            {
                primeiro_menortempo = vet[i];
                posicao = i;
            }
        }
    
        printf("%f %d\n", primeiro_menortempo, posicao);
    
        //segundo colocado
        segundo_menortempo =999;
        posicao = 0;
    
        for(i = 0; i < 8; i++)
        {
            if(vet[i] > primeiro_menortempo && vet[i] < segundo_menortempo)
            {
                segundo_menortempo = vet[i];
                posicao = i;
            }
        }
    
        printf("%f %d\n", segundo_menortempo, posicao);
    
        //terceiro colocado
        terceiro_menortempo = 9999;
        posicao = 0;
    
        for(i = 0; i < 8; i++)
        {
            if(vet[i] > segundo_menortempo && vet[i] < terceiro_menortempo)
            {
                terceiro_menortempo = vet[i];
                posicao = i;
            }
        }
    
        printf("%f %d\n", terceiro_menortempo, posicao);
    }
    else if(temposiguais == 1)
    {
        primeiro_menortempo = vet[0];
        posicao = 0;
        segundo_menortempo = vet[0];
        terceiro_menortempo = vet[0];
        printf("%f %d\n", primeiro_menortempo, posicao);
        printf("%f %d\n", segundo_menortempo, posicao + 1);
        printf("%f %d\n", terceiro_menortempo, posicao + 2);
    }
   

    return 0;
}