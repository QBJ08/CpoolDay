#include "print_char.h"

void my_print_square(int size, char c) {
    if (size < 1) {
        return;
    }

    if (c <= 32 | c >= 127) {
        return;
    }

    for (int i = 0; i < size; i++) {
        if (i == 0 | i == size-1)
            {
            for (int j = 0; j < size; j++) {
                print_char(c);
            }
        }

        else {
            print_char(c);
            for (int j = 1; j < size-1; j++) {
                print_char(' ');
            }
            print_char(c);
        }
        if (i!=size-1) {
            print_char('\n');
        }
    }
};