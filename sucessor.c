/*1. Implemente um algoritmo que solicite ao usuário um número inteiro n (digitado) e
posteriormente o sistema mostra o sucessor de n (ex. se o usuário digitou 15, o sistema deverá
imprimir 16).*/
#include <stdio.h>
int main(void)
{
    int number,sucessor; //variáveis definidas

    //local que solicita um valor inteiro ao usuário
    printf("Insira um valor inteiro: ");
    scanf("%d",&number);

    //campo que é responsável por encontrar o sucessor do valor inserido
    sucessor = number + 1;

    printf("O sucessor do numero %d eh %d",number,sucessor);

    return 0;

}