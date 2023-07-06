#include <stdio.h>

/** global variable */
int b;

int a = 100;

void formal_param(int a);

int main() {

    /** local variable */
    int a = 10;

    b = a + 10;

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    formal_param(a);
}

void formal_param(int a) {
    printf("value of a in formal_param: %d\n", a);
}