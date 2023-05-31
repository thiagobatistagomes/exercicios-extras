#include <stdio.h>

/*
    Uma multinacional deseja contratar um novo funcionário. Para isso, ela pretende analisar os currículos dos candidatos. São considerados aptos à vaga os seguintes perfis de candidatos:
- Homens que possuem apenas o Ensino Médio e dominam ao menos 2 idiomas estrangeiros.
- Mulheres que possuem apenas o Ensino Médio e dominam ao menos 3 idiomas estrangeiros.
- Homens que possuem Ensino Superior e dominam ao menos 1 idioma estrangeiro.
- Mulheres que possuem Ensino Superior e dominam ao menos 2 idiomas estrangeiros.
Escreva, em linguagem C pura, um programa que leia um inteiro, representando quantos idiomas um candidato domina; uma letra, representando o seu sexo, sendo "M" para masculino e "F" para feminino; e outra letra, representando seu nível de escolaridade, sendo "M" para Ensino Médio e "S" para o Superior. A seguir, seu programa deve mostrar se o candidato está apto ou não para o cargo, imprimindo apenas um "sim" ou "nao" (sem acento/aspas) como resposta.
*/

int main ()
{
    int idiomas;
    char sexo, escolaridade;

    //lendo as informacoes do candidato
    scanf("%d %c %c", &idiomas, &sexo, &escolaridade);

    //verificando as condicoes de aptidao
    if(sexo == 'M' && escolaridade == 'M' && idiomas >= 2)
    {
        printf("sim");
    }
    else if(sexo == 'F' && escolaridade == 'M' && idiomas >= 3)
    {
        printf("sim");
    }
    else if(sexo == 'M' && escolaridade == 'S' && idiomas >= 1)
    {
        printf("sim");
    }
    else if(sexo == 'F' && escolaridade == 'S' && idiomas >= 2)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }




    return 0;
}