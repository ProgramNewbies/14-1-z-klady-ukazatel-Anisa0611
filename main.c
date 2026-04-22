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

    int sum = *pa + *pb + *pc;

    int *max = pa;
    if(*pb > *max) {
        max = pb;
    }
    if(*pc > *max) {
        max = pc;
    }

    printf("Sum = %d\n", sum);
    printf("Max: %d\n", *max);

    if(sum % 2 == 0){
        printf("Sum is even!\n");
    } else {
        printf("Sum is odd!\n");
    }

return 0;
}