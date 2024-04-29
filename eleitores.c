/*4. Implemente um programa que leia a quantidade de eleitores de um município, o número de
votos brancos, nulos e válidos. Calcule e imprima o percentual de cada um dos tipos de votos
(brancos, nulos e válidos).*/

#include <stdio.h>
int main()
{   
    //declarando variáveis
    int votosBrancos, votosNulos, votosValidos, votos[3], i, quantidade = 0;

    //solicita ao usuário a quantidade de eleitores de cada tipo, com informações em ordem específica
    printf("Insira a quantidade de eleitores para votos brancos, nulos e validos, respectivamente: \n");

    for(i = 0; i < 3; i++){
        printf("numero de eleitores: ");
        scanf("%d",&votos[i]); // lê os os valores e armazena no array
        quantidade+=votos[i]; //calcula a quantidade total de eleitores inseridos
    }

    //a variável recebe o valor da posição 0 do array
    votosBrancos = votos[0];

    //a variável recebe o valor da posição 1 do array
    votosNulos = votos[1];
    
    //a variável recebe o valor da posição 2 do array
    votosValidos = votos[2];


    //o programa printa na tela a porcentagem já calculada separadamente em cada printf correspondente
    printf("A porcentagem de votos brancos eh: %.2lf%%\n", (votosBrancos/(double)quantidade)*100);
    printf("A porcentagem de votos nulos eh: %.2lf%%\n", (votosNulos/(double)quantidade)*100);
    printf("A porcentagem de votos validos eh: %.2lf%%\n", (votosValidos/(double)quantidade)*100);


    return 0;

}