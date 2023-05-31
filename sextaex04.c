#include <stdio.h>

/*
    Escreva, em linguagem C pura, um programa que leia uma matriz de inteiros de ordem MxN, onde o usuário informa os valores de M e N. A seguir, leia um vetor de inteiros de P posições, onde o usuário informa o valor de P. Mostre, como resposta, uma única linha contendo os elementos ímpares da matriz que também estão presentes no vetor. Separe os elementos por um único espaço.
*/

int main ()
{
	int M, N, P;
	int i, j, k;

	//lendo os valores de M e N
	scanf("%d %d", &M, &N);
	
	//declarando a matriz de M e N
	
	int x[M][N];
	
	//preenchendo a matriz de M e N
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}
	
	//lendo o valor de P
	scanf("%d", &P);
	
	//declarando o vetor de P posicoes
	
	int vet[P];
	
	//lendo os valores do vetor
	for(k = 0; k < P; k++)
	{
		scanf("%d", &vet[k]);
	}
	
	//pegando os elementos impares da matriz que estao presentes no vetor
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			for(k = 0; k < P; k++)
			{
				if(x[i][j] % 2 == 1 && vet[k] % 2 == 1 && x[i][j] == vet[k])
				{
					printf("%d ", vet[k]);
				}
			}
		}
	}

	return 0;
}