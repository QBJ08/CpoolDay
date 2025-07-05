#include "print_char.h"

void my_print_revert(char *toRevert) {
    int length=0;

    while (toRevert[length]) length++;

    for (int j = 0; j<length; j++) {
        print_char(toRevert[length-(j+1)]);
    }

};