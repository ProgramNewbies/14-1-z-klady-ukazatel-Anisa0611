#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a values:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    int *pa = &a;
    int *pb = &b;
    int *pc = &c;

    int soucet = *pa + *pb + *pc;

    int *max = pa;
    if(*pb > *max) {
        max = pb;
    }
    if(*pc > *max) {
        max = pc;
    }

    printf("Soucet = %d\n", soucet);
    printf("Max: %d\n", *max);

    if(soucet % 2 == 0){
        printf("Soucet je sudy!\n");
    } else {
        printf("Soucet je lichy!\n");
    }

return 0;
}