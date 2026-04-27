/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gabriel Bernardes Cunha
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 25/04/2026
Objetivo    : Transformar uma frase em uma letra maiúscula e em seguida uma minúscula, sucessivamente
Aprendizado : Ler frases (strings), usar tolower/toupper, usar frase[i]='caractere', usar fgets stfin, strcspn ...
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main() {
    
    char frase[51];
    int i=0;
    int n=0;
    fgets(frase, 51, stdin);
    frase[strcspn(frase,"\n")]='\0';
    
    // não sei o que errei, conferir depois
    
        while (frase[i]!='\0'){
         if (frase[i]!=' ') {
            if (n%2==0) {
                frase[i]=toupper(frase[i]);
        
         }
         else    {
                frase[i]=tolower(frase[i]);
         }
         n++;    
         }
         i++;
        }
        printf("%s\n",frase);
    }    
    return 0;
}
