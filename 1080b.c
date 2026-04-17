/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gabriel Bernardes Cunha
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 16/04/2026
Objetivo    : Ler 100 numeros, mostrar o maior e sua posicao na listagem (vetor)
Aprendizado : ler vetores, ver o maior e sua posicao utilizando vetores
-------------------------------------------------------------------------- */

#include <stdio.h>
int main () {
    int v[100], i, posicao, maior=0;
    for (i=0;i<100;i++){
        scanf("%d",&v[i]);
        if (v[i]>maior) {
            maior=v[i];
            posicao=i;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",++posicao);
    return 0;
}
