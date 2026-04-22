#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int *pa = &a;
    int *pb = &b;
    int *pc = &c;

    int soucet = *pa + *pb + *pc;

    int *maximum = pa;
    if(*pb > *maximum) {
        maximum = pb;
    }
    if(*pc > *maximum) {
        maximum = pc;
    }

    printf("Soucet: %d\n", soucet);
    printf("Maximum: %d\n", *maximum);

    if(soucet % 2 == 0){
        printf("Soucet je sudy\n");
    } else {
        printf("Soucet je lichy\n");
    }

return 0;
}