#include <iostream>
#include "src/oops.hpp"
using namespace std;

int main() {
    int age = valid(1, 120, "Enter your age: ", "Invalid input.\n");
    cout << "You entered age: " << age << endl;



    return 0;
}