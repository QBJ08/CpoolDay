#include "print_char.h"

void my_print_revert(char *toRevert) {
    int length = 0;
    int i;
    while (*toRevert != "\0") {
        length++;
    }

    for(i=0; i<length; i++) {
        print_char(toRevert[-(i+1)]);
    }

};

int main(void) {
    my_print_revert("codingclub");
    return 0;
}