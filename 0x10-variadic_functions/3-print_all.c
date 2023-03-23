#include "variadic_functions.h"
/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */
void print_all(const char * const format, ...) {
    const char *p = format;
    va_list ap;
    va_start(ap, format);

    char c;
    int i;
    float f;
    char *s;

    while (*p != '\0') {
        if (*p == 'c') {
            c = (char)va_arg(ap, int);
            printf("%c", c);
        } else if (*p == 'i') {
            i = va_arg(ap, int);
            printf("%d", i);
        } else if (*p == 'f') {
            f = (float)va_arg(ap, double);
            printf("%f", f);
        } else if (*p == 's') {
            s = va_arg(ap, char *);
            if (s == NULL) {
                printf("(nil)");
            } else {
                printf("%s", s);
            }
        }
        p++;
    }

    printf("\n");
    va_end(ap);
}
