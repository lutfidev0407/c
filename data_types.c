#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

void printDataTypes(int argc, char** argv);

int main(int argc, char** argv) {
    char a = 'a'; // -128 to 127 or 0 to 255
    unsigned char b = 'b'; // 0 to 255
    signed char c = 127; // -128 to 127
    int d = 2147483647; // -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
    unsigned int e = -1; // 127

    printf("Char: %d\n", a);
    printf("Char: %d\n", b);
    printf("Char: %d\n", c);
    printf("Int: %d\n", d);
    printf("Unsigned int: %d\n", c);

    printDataTypes(argc, argv);
}

void printDataTypes(int argc, char** argv) {
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
}