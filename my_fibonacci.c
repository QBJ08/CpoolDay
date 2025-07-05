#include "print_number.h"

void my_fibonacci(int minimum, int maximum) {

    if (minimum < 0 | maximum < minimum) {
        return;
    }

    int a = 0;
    int b = 1;
    int c;
    while (1) {
        if (a>= minimum & a<= maximum) {
            print_number(a);
        }
        else if (a>= maximum) {
            return;
        }
        c = a + b;
        a = b;
        b = c;
    }
};

int main(void)
{
int minimum = 0;
int maximum = 10;
my_fibonacci(minimum, maximum);
return 0;
}