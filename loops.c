#include <stdio.h>

int main() {

    /** while */
    int counter = 5;
    while (counter--) {
        printf("%d\n", counter);
    }

    /** for */
    for (int i = 1; i <= 10; i++) {
        printf("Value i: %d\n", i);
    }
    
    /** do while */
    int a = 1;
    do {
        printf("a: %d\n", a);
        a++;
    } while (a <= 5);
    return 0;
}