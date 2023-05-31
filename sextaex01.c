#include <stdio.h>

/*
    O triângulo é uma figura formada por três segmentos de reta. Quando o maior ângulo do triângulo é menor que 90º, o triângulo é chamado de "triângulo acutângulo". Quando este ângulo é exatamente 90º, o triângulo é chamado de "triângulo retângulo". No caso do maior ângulo ser maior que 90º, o triângulo é chamado de "triângulo obtusângulo". Escreva, em linguagem C pura, um programa que leia as medidas dos ângulos de um triângulo (inteiros) e mostre a sua classificação: "acutangulo", "retangulo", "obtusangulo" (sem acentos/aspas) como resposta.
*/

int main ()
{
	int a, b, c, maior;
	scanf("%d %d %d", &a, &b, &c);

	maior = a;
	
	if(b > maior)
	{
		maior = b;
	}
	
	if(c > maior)
	{
		maior = c;
	}
	
	if(maior < 90)
	{
		printf("acutangulo\n");
	}
	
	if(maior == 90)
	{
		printf("retangulo\n");
	}
	
	if(maior > 90)
	{
		printf("obtusangulo\n");
	}

	return 0;
}