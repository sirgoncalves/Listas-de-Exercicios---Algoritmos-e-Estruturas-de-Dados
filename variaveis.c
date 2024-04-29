/*3. Implemente um programa que leia dois números reais e armazene-os em duas variáveis (ex.:
A e B). Em seguida, troque dos valores das variáveis de forma que a primeira variável passe a ter
o valor da segunda, e vice-versa. Ao final, imprima os valores finais das variáveis.
*/
#include <stdio.h>
int main()
{
    //variáveis declaradas
    double valores [2], a, b, temp;
    int i;

    //solicita dois valores reais
    printf("Insira dois valores:\n");

        for (i = 0; i < 2; i++){
        printf("valor %d : ", i + 1);
        scanf("%lf", &valores[i]); // lê os os valores e armazena no array
    }


    //a variável a recebe o valor na posição 0 do array
    a = valores[0];

    //a variável b recebe o valor na posição 1 do array
    b = valores[1];


    printf("Valores iniciais: a = %.2lf e b = %.2lf\n",a,b);


    /*variável temporária para realizar as trocas. Nesse caso, temp recebe a, a recebe o valor de b e, por fim,
    b recebe o valor de temp (que anteriormente era de a)*/
    temp = a;
    a = b;
    b = temp;


    printf("Valores finais: a = %.2lf e b = %.2lf",a,b);

    return 0;
}