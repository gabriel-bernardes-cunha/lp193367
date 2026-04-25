#include <stdio.h>
#include <ctype.h> 
int main() {
    char frase[51];
    int i=0;
    int n=0;
    fgets(frase,51,stdin);
    
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
