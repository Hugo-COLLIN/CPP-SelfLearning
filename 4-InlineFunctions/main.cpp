#include <iostream>
using namespace std;

# include "MyLib.h"

int main() {
    int a = 3;
    int b = 6;
//    int result = mini(a,b) + 2; // int result = a < b ? a : b + 2; // Not working: +2 is ignored now
//    int result = mini2(a,b) + 2; // Not working: +2 is ignored for now
    int result = mini3(a,b) + 2;

    cout << result << endl;

    return 0;
}