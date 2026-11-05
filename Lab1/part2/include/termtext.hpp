#pragma once

namespace advancedPrint {

enum class Color {
    Blue,
    Red,
    Green,
    Yellow
};

int magicValue(int n, int i, int j);
void moveTo(int row, int col);

void clear();


}  