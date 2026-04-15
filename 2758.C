/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2757
Data        : 09/04/2026
Objetivo    : Escrever numeros de variadas formas
Aprendizado : Dominar printf e a forma que um numero sera escrita, como sua 
justificativa e notacao
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
 
    float a, b;
    double c, d;

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);


    printf("A = %f, ",a);
    printf("B = %f\n",b);
    printf("C = %lf, ",c);
    printf("D = %lf\n",d);

    printf("A = %0.1f, ",a);
    printf("B = %0.1f\n",b);
    printf("C = %0.1lf, ",c);
    printf("D = %0.1lf\n",d);

    printf("A = %0.2f, ",a);
    printf("B = %0.2f\n",b);
    printf("C = %0.2lf, ",c);
    printf("D = %0.2lf\n",d);

    printf("A = %0.3f, ",a);
    printf("B = %0.3f\n",b);
    printf("C = %0.3lf, ",c);
    printf("D = %0.3lf\n",d);

    printf("A = %0.3E, ",a);
    printf("B = %0.3E\n",b);
    printf("C = %0.3E, ",c);
    printf("D = %0.3E\n",d);

    printf("A = %0.0f, ",a);
    printf("B = %0.0f\n",b);
    printf("C = %0.0lf, ",c);
    printf("D = %0.0lf\n",d);
return 0;
}
