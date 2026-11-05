#include <cstdio>
#include "../include/termtext.hpp"
using namespace std;
using namespace advancedPrint;  

int main() {
   clear();

    moveTo(5, 20);
    setColor(Color::Red);
    printf("NEW GAME");
    resetColor();

    moveTo(7, 20);
    setColor(Color::Yellow);

    printf("RESUME");           
    resetColor();

    moveTo(9, 20);
    setColor(Color::Green);

   printf("SETTINGS");
   resetColor();

    moveTo(20, 1);
    return 0;
}