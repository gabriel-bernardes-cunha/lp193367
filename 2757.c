/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gabriel Bernardes Cunha
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2757
Data        : 09/04/2026
Objetivo    : Escrever numeros inteiros de variadas formas
Aprendizado : Dominar printf e a forma que um numero sera escrita, como sua 
justificativa e notacao
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
 
    int a, b, c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf("A = %d, ", a);
    printf("B = %d, ", b);
    printf("C = %d\n", c);


    printf("A = %10d, ", a);
    printf("B = %10d, ", b);
    printf("C = %10d\n", c);

    printf("A = %010d, ", a);
    printf("B = %010d, ", b);
    printf("C = %010d\n", c);


    printf("A = %-10d, ", a);
    printf("B = %-10d, ", b);
    printf("C = %-10d\n", c);


    return 0;
}
