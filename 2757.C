#include <stdio.h>

int main() {
 
    int a, b, c;

    scanf("%d",&a);

    scanf("%d",&b);

    scanf("%d",&c);



    printf("A = %d, ", a);

    printf("B = %d, ", b);

    printf("C = %d\n", c);


    printf("A = %10d, ", a);

    printf("B = %10d, ", b);

    printf("C = %10d\n", c);


    printf("A = %010d, ", a);

    printf("B = %010d, ", b);

    printf("C = %010d\n", c);


    printf("A = %-10d, ", a);

    printf("B = %-10d, ", b);

    printf("C = %-10d\n", c);


return 0;
}
