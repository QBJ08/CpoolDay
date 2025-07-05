#include "print_char.h"

void my_print_n_ascii(int howMany){
    if (howMany<0) {
        howMany = 0;
    }
    else if (howMany>96) {
        howMany = 0;
    }
    for (int i=32; i<33+howMany; i++){
        print_char(i);
    }

};

int main(void)
{
my_print_n_ascii(5);
return 0;
}