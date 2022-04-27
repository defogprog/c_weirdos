#include <stdio.h>

// In C some_func() != some_func(void)
// It means that number of parameters is not specified
void some_func() {
    printf("Doing something\n");
}

int main() {
    // void?
    some_func();

    // With some string parameter. No warning from compiler
    some_func("Passing some string to function");

    static int a, b, c, d, e, f, x;
    // Passing a heck of a lot parameters, still OK
    some_func(a, b, c, d, e, f, &x);
}
