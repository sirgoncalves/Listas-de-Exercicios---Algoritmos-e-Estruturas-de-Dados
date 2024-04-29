/*6. Escreva um programa que receba 2 pontos cartesianos (x, y) e calcule a distância Euclidiana
entre eles. 
Fórmula: d² = (x1 - x2)² + (y1 - y2)²*/
#include <stdio.h>
#include <math.h>

int main()
{
    //variáveis declaradas
    int i; 
    double distancia = 0, lista[4];

    //campo que irá solicitar ao usuário as coordenadas cartesianas 
    printf("Insira as coordenadas de dois pontos no formato x1, y1, x2, y2: \n");

        for(i = 0; i < 4; i++){
            printf("valor %d: ", i + 1);
            scanf("%lf", &lista[i]); // Lê as coordenadas como números de ponto flutuante
    }

    //a variável recebe o valor da posição 0 do array
    int x1 = lista[0];

    //a variável recebe o valor da posição 1 do array
    int y1 = lista[1];

    //a variável recebe o valor da posição 2 do array
    int x2 = lista[2];

    //a variável recebe o valor da posição 4 do array
    int y2 = lista[3];
   

    //calcular a distancia entre os pontos
    distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("A distncia entre os pontos eh: %.2lf",distancia);

    return 0;

}