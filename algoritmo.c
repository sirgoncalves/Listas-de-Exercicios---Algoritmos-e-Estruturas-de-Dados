/*7. Implemente um algoritmo com as linhas a seguir e apresente no código-fonte uma explicação
detalhada, com suas palavras, do que acontece em cada uma das linhas:*/
#include <stdio.h>
int main()
{
    //variáveis declaradas
    int a,b,c,d=1;    //a,b,c,d são inteiros e d recebe o valor 1

        a = -2; //a recebe o valor de -2
        b = a*a; // b recebe o valor de (-2)² = 4
        c = d++; //c recebe o valor de d (1), e depois d é incrementado para 2
        d = c++ + 5; //d (que vale 2) recebe o valor de 1 + 5 = 6. Em c é incrementado para 2
        d = ++c + 5; // d (que vale 6) recebe o valor de c, que é incrementado para 3, mais 5, ou seja, 3 + 5 = 8

    printf ("%d %d %d %d", a, b, c, d); //o campo printa na tela o resultado obtido, que foi: -2 4 3 8

    return 0;

}

/*
anotação 1:   em c = d++ o valor de c recebe o valor de d (anterior) e d recebe um valor novo, que é d + 1
anotação 2:   em d = ++c o valor de d recebe o valor de c (anterior) + 1, ou seja, o valor é incrementado e atribuído à outra variável, o que difere de c++
*/