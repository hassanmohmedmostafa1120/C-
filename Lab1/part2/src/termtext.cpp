#include "../include/termtext.hpp"

#include <cstdio>

namespace advancedPrint {






int magicValue(int n, int i, int j) {
    return n * ((i + j + n / 2 + 1) % n)
         + ((i + 2 * j + 1) % n) + 1;
}
void moveTo(int row, int col) {
    std::printf("\x1b[%d;%dH", row, col);
}

void clear() {
    std::printf("\x1b[2J\x1b[H");
    std::fflush(stdout);
}


}  
