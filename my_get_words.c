#include "print_char.h"

void my_get_words(char *sentance) {
    int length = 0;
    while (sentance[length]) length++;

    for (int i = 0; i < length; i++) { 
        if (sentance[i] == '\t' | sentance[i] == ' ') {
            print_char('\n');
        }
        while (sentance[i] == '\t' | sentance[i] == ' ') {
            i++;
        }
        print_char(sentance[i]);
    }
};