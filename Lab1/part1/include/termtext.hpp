#pragma once

namespace advancedPrint {

enum class Color {
    Black, Red, Green, Yellow
};
void moveTo(int row, int col);
void clear();

void setColor(Color c);
void resetColor();

}