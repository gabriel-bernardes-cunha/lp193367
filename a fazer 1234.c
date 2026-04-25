/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gabriel Bernardes Cunha
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 25/04/2026
Objetivo    : Transformar uma frase em uma letra maiúscula e em seguida uma minúscula, sucessivamente
Aprendizado : Ler frases (strings), usar tolower/toupper, usar frase[i]='caractere', usar 
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main() {
    
    char frase[51];
    int i=0;
    int n=0;
    
    fgets(frase,51,stdin);
    frase[strcspn(frase,"\n")]='0';
    
    while (frase[i]!='\0'){
        if (frase[i]==' ') {
            printf(" ");
        } 
        else {
            // i percorre o laço
            // n percorre posições, se n=i, pode não ser dançante!
            if (n%2!=0){
                printf("%c",tolower(frase[i]));
            } 
            else {
                 printf("%c",toupper(frase[i]));
            }
            n++;
        }
        i++;
    }
    return 0;
}
