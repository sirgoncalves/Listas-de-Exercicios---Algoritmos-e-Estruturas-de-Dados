/*5. Implemente um programa que o usuário informa o valor a ser investido, uma taxa de juros
mensal a ser aplicada ao capital, e o número de meses que irá durar a aplicação. Ao final o
programa deverá mostrar:
• O valor total acumulado ao final período.
• O valor de juros rendidos.
Fórmula: M = C.(1+i)^t*/

#include <stdio.h>
#include <math.h> //incluir funções matemáticas
int main()
{
    //variáveis declaradas
    double valorInvestido, juros, montante, rendimento;
    int meses;

    //campo para o usuário inserir um valor real de capital
    printf("Insira o capital:");
    scanf("%lf",&valorInvestido);

     //campo para o usuário inserir um valor real para a taxa de juros
    printf("Insira uma taxa de juros (ex.: 55) :");
    scanf("%lf",&juros);

     //campo para o usuário inserir uma quantidade inteira de meses
    printf("Insira a quantidade de meses:");
    scanf("%d",&meses);

    //cálculo de juros compostos
    montante = valorInvestido*(pow((1+(juros/100)),meses));
    
    rendimento = montante - valorInvestido;

    //mostrar resultados na tela
    printf("O valor total acumulado no final do periodo foi de: R$%.2lf\n",montante);
    printf("O valor de juros rendido foi de: R$%.2lf",rendimento);

    return 0;
}