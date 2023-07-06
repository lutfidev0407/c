#include <stdio.h>

/** call by value */
int add(int a, int b);

/** call by reference */
void swap(int *a, int *b);

int main() {

    int a = 10;
    int b = 20;

    int result = add(a, b);
    printf("Result: %d\n", result);

    printf("Before swap, value of a: %d\n", a);
    printf("Before swap, value of b: %d\n", b);

    swap(&a, &b);

    printf("After swap, value of a: %d\n", a);
    printf("After swap, value of b: %d\n", b);
}

int add(int a, int b) {
    return a + b;
}

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}