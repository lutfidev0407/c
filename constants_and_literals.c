#include <stdio.h>

/**
 * Integer Literals
 * 212         Legal
 * 215u        Legal
 * 0xFeeL      Legal
 * 078         Illegal: 8 is not an octal digit
 * 032UU       Illegal: cannot repeat a suffix
*/

/**
 * 85         decimal
 * 0213       octal
 * 0x4b       hexadecimal
 * 30         int
 * 30u        unsigned int
 * 30l        long
 * 30ul       unsigned long
*/

/**
 * Floating-point Literals
 * 3.14159       Legal
 * 314159E-5L    Legal
 * 510E          Illegal: incomplete exponent
 * 210f          Illegal: no decimal or exponent
 * .e55          Illegal: missing integer or fraction
*/

/**
 * The #define Preprocessor
 * #define identifier value
*/
#define LENGTH 10
#define URL "http://google.com"
#define NEW_LINE '\n'


int main() {
    /** character constants */
    printf("Hello\tWorld\n");

    /** string literals */
    char str[] = "hello, " "d" "ear";
    printf("STR: %s", str);

    /** #define keyword */
    printf("Length: %d", LENGTH);
    printf("%c", NEW_LINE);
    printf("URL: %s", URL);
    printf("%c", NEW_LINE);
    
    /** The const Keyword */
    const int width = 25;
    printf("Width: %d", width);
    return 0;
}