#include "print_char.h"

void my_print_square(int size, char c) {

    if (size < 0) {
        return;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            print_char(c);
        }
        print_char("\n");
    }
};