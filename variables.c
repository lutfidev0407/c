#include <stdio.h>

/** variable declaration */
extern int a, b;
extern int c;
extern float d;

/** function declaration */
int func();

int main() {

    /** variable definition */
    int a, b;
    int c;
    float d;

    /** actual initialization */
    a = 10;
    b = 20;
    c = 30;
    d = 10 /2.5;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %f\n", d);

    printf("func: %d\n", func());
}

/** function definition */
int func() {
    return 10;
}