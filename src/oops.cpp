#include <iostream>
#include "oops.hpp"
using namespace std;

int valid(int lower, int upper, const string& prompt, const string& error) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << error << endl;
            continue;
        }

        if (value < lower || value > upper) {
            cin.ignore(1000, '\n');
            cout << error << endl;
            continue;
        }

        cin.ignore(1000, '\n');
        return value;
    }
}
