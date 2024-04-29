/*2. Implemente um algoritmo que solicita o valor de 3 notas (n1, n2 e n3) e depois mostra: a soma,
a média e o produto das notas*/
#include <stdio.h>
int main()

{
    //array criado para armazenar as notas inseridas pelo usuário
    int numeros [3], i;
    double soma=0, media, produto=1;
   


    //campo que solicita ao usuário as notas obtidas nas 3 provas
    printf("Insira o valor das notas, em qualquer ordem: \n");
    
    for (i = 0; i < 3; i++){
        printf("nota %d : ", i + 1);
        scanf("%d", &numeros[i]); // lê os os valores das notas digitadas e adiciona no array
    }


    //soma os elementos do array
    for (i = 0; i < 3; i++) {
        soma += numeros[i];
    }


    //multiplica todos os elementos do array
    for (i = 0; i < 3; i++) {
    produto *= numeros[i];
    }


    //calcula a média
    media = soma/3;

    printf("A soma dos elementos eh: %.2lf\n",soma);
    printf("A media eh: %.2lf\n",media);
    printf("O produto eh: %.2lf",produto);

    return 0;

}
