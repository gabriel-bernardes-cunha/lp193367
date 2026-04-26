/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gabriel Bernardes Cunha
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 26/04/2026
Objetivo    : Decodificar uma eventual cifra de cesar, de modo mais robusto e legível, além das propsições do exercício
Aprendizado : Delimitar ASCII para somente letras
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
    char s[50];
    int N, a=0;
    int b=0;
    scanf("%d",&N);

    for (int i=0;i<N;i++) {  
        scanf ("%s",s);
        scanf("%d",&a);
        a=a%26;
        
        while(s[b]!='\0') {
          
            if (s[b]>='A' && s[b]<='Z') // é uma letra maiúsucula?
            {
                s[b]=s[b]-a;
                if (s[b]<'A') { // sai do alfabeto? 
                  s[b]+=26;
                }
            }
            if (s[b]>='a' && s[b]<='z' ) // é uma letra minúscula?
            {
                s[b]=s[b]-a;
                if (s[b]<'a') { // sai do alfabeto?
                  s[b]+=26;
                }
            }
            b++;
        }
        printf("%s\n",s);
        b=0; 
    }
 
    return 0;
}
