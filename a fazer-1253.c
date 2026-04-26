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
    char saida[50];
    int N, a=0;
    int b=0;
    scanf("%d",&N);
    for (int i=0;i<N;i++) {  
     
        scanf ("%s",saida);
        scanf("%d",&a);
        a=a%26;
        
        while(saida[b]!='\0') {
            if ((saida[b]-a<'a' && saida[b]-a>'A') || (saida[b]-a<'A')){
                saida[b]+=26;
            }
            saida[b]=saida[b]-a;
            b++;
        }
        printf("%s\n",saida);
        b=0; 
    }
 
    return 0;
}
