#include "my_ls.h"
#include <unistd.h>

void my_putnbr(int n);
void my_putchar(char c);

void my_putnbr(int n)
{
    if (n == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        my_putnbr(147483648);
    }
    else if (n >= 10) {
        my_putnbr(n / 10);
        my_putnbr(n % 10);
    }
    else if (n < 10 && n >= 0) {
        my_putchar(n + '0');
    }
    else if (n < 0) {
        my_putchar('-');
        my_putnbr(-n);
    }
}
