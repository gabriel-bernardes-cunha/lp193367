/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1071
Data        : 15/04/2026
Objetivo    : Escrever a soma dos valores ímpares que estão entre os valores 
fornecidos na entrada que deverá caber em um inteiro.
Aprendizado : Escrever condicoes, escrever repeticoes usando for, especialmente 
nas condicoes de inicio e parada
-------------------------------------------------------------------------- */

#include <stdio.h>
int main() {
    int x,y,z,s;
    z=0;
    s=0;
    scanf("%d%d",&x,&y);
    if (x<y){
        z=y;
        y=x;
        x=z;
    }
    for(z=y;z<x;z++){
        if (z%2!=0 && z!=y) {
           s+=z;
        }
    }
    printf("%d\n",s);
    return 0;
}
