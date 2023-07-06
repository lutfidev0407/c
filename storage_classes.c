#include <stdio.h>

void func(void);

static int count = 5; /* global variable */

int counter;
/** data/support.c */
extern void write_extern();

int main() {
    auto int a = 1;
    register int b = 2;

    printf("%d\n", a);
    printf("%d\n", b);

    while (count--) {
        func();
    }

    counter = 5;
    write_extern();
    return 0;
}

void func(void) {
    static int i = 5; /* local static variable */
    i++;

    printf("i is %d and count is %d\n", i, count);
}