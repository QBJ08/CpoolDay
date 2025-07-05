#include "print_char.h"

void my_print_ascii(void) {
    for (int i = 33; i<128; i++) {
        print_char(i);
    }
};
