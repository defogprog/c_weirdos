# void not void

In C (unlike C++), function without parameters is not equal to function with `void` parameter;
Function without parameters means that number of parameters in this function is not specified;
So, you can pass as much parameters to this function as you want, they simply will be ignored;

Actually, it is from old C standard, and you can force compiler to throw a warning on this,
but you need to add it explicitly with `-Wstrict-prototypes`, `-Wall` does not contain whis
warning (http://gcc.gnu.org/onlinedocs/gcc-4.4.0/gcc/Warning-Options.html);
