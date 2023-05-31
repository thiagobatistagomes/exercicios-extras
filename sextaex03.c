#include <stdio.h>

/*
    Escreva, em linguagem C pura, um programa que leia valores inteiros indefinidamente e armazene, em um vetor de 5 posições, apenas os números primos digitados. Seu programa deve parar de ler números quando o vetor estiver totalmente preenchido. Imprima, como resposta, os elementos do vetor, em uma única linha, separados entre si por um único espaço. Um número primo é aquele que possui apenas dois divisores naturais: 1 e ele mesmo.
*/

int main ()
{
    int vetor[5], i, divisor, N, contador = 0;
    while (contador < 5)
    {
        scanf("%d", &N);
        //verificar se o numero e primo
        
        if(N > 1)
        {
            divisor = 0;
            for(i = 1; i <= N; i++)
            {
                if(N % i == 0)
                {
                    divisor++;
                }
            }
            if(divisor == 2)
            {
                vetor[contador] = N;
                contador++;
            }
        }
        
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }


    return 0;
}