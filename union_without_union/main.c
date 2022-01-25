#include <stdio.h>
#include "header1.h"		// Choose either header
// #include "header2.h"		// from these two

extern void print_int_var(void);
extern void print_float_var(void);

int main(void) {
	var = -9999999;
	print_int_var();
	print_float_var();
}
