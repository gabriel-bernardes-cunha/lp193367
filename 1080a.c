/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gabriel Bernardes Cunha
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 16/04/2026
Objetivo    : Ler 100 numeros, motrar o maior e sua posicao na listagem
Aprendizado : relizar listas e utilizar parametros para posicao
-------------------------------------------------------------------------- */

#include <stdio.h>
int main () {
    int i, d, posicao, maior=0;
    for (i=0;i<100;i++){
        scanf("%d",&d);
        if (d>maior) {
            maior=d;
            posicao=i;
        }
    }
    printf("%d\n",maior);
    printf("%d\n", posicao+1);
    return 0;
}
