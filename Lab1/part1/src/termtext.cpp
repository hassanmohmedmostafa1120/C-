#include "../include/termtext.hpp"
#include <cstdio>
using namespace std;
namespace advancedPrint{

    struct RGB {
    int r, g, b;
    };

    RGB toRGB(Color c) {
    switch (c) {
        case Color::Black:   return {0, 0, 0};
        case Color::Red:     return {255, 0, 0};
        case Color::Green:   return {0, 255, 0};
        case Color::Yellow:  return {255, 255, 0};
    }
     return {255, 255, 255};
    }
 

    void moveTo(int row, int col) {
    printf("\x1b[%d;%dH", row, col);
    }   


    void clear() {
    printf("\x1b[2J\x1b[H");
    fflush(stdout);
    }


    void setColor(Color c) {
    RGB v = toRGB(c);
    printf("\x1b[38;2;%d;%d;%dm", v.r, v.g, v.b);

   
    }

    void resetColor() {
    printf("\x1b[0m");
    }   



}

