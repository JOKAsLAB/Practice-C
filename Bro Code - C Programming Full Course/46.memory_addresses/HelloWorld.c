#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    char x;
    char y[2];

    //short a = 'X';
    //short b = 'Y';
    //short c = 'Z';

    //int a = 'X';
    //int b = 'Y';
    //int c = 'Z';

    //double a = 'X';
    //double b = 'Y';
    //double c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%d bytes\n", sizeof(x));
    printf("%d bytes\n", sizeof(y));

    printf("%p\n",  &a);
    printf("%p\n",  &b);
    printf("%p\n",  &c);
    printf("%p\n",  &x);
    printf("%p\n",  &y);

    return 0;
}