
#include <iostream>
#include <thread>
#include <chrono>
#include "../include/termtext.hpp"

using namespace std;
using namespace advancedPrint;

int main() {
    int n;

    cout << "Enter N (odd number, 3 or more): ";
    cin >> n;

    if (n >= 3  && n % 2 == 0) {
        cout << "N must be an odd number >= 3\n";
        return 1;
    }

    clear();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            moveTo(3 + i * 2, 5 + j * 6);
            cout << magicValue(n, i, j);
            cout.flush();

            this_thread::sleep_for(chrono::milliseconds(100));
        }
    }

    moveTo(4 + n * 2, 1);

    return 0;
}
