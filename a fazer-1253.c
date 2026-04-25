/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gabriel Bernardes Cunha
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 25/04/2026
Objetivo    : 
Aprendizado : 
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
 
    int N, a=0;
    int b=0;
    scanf("%d",&N);
    for (int i=0;i<N;i++) {
        
        char saida[50];
        
        scanf ("%s",saida);
        scanf("%d",&a);
        
        while(saida[b]!='\0') {
            if (saida[b]-a<65 && saida[b]-a>60 || saida[b]-a<97 && saida[b]-a>){
                saida[b]='Z'
            }
            if (
            saida[b]=saida[b]-a;
            b++;
        }
        printf("%s\n",saida);
    }
 
    return 0;
}
