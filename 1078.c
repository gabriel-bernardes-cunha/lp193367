/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gabriel Bernardes Cunha
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Realizar a tabuada de um número
Aprendizado : Laços for e trabalhar com valores acrescidos
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int N;
    scanf("%d",&N);
    for (int i=1;i<=10;i++) {
        printf("%d x %d = %d\n",i,N,i*N);
    }
    return 0;
}
