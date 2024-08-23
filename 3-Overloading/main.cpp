#include <iostream>
using namespace std;

void simpleDemo() {
    cout << "simple demo with zero params" << endl;
}

void simpleDemo(int i) {
    cout << "simple demo with integer param" << endl;
}

void simpleDemo(double d) {
    cout << "simple demo with double param" << endl;
}

void simpleDemo(int * ptr) {
    cout << "simple demo with a pointer param" << endl;
}

void simpleDemo(const char * s, int a) {
    cout << "simple demo with two params" << endl;
}

struct Pair {
    int first;
    int second;
};

ostream & operator<<(ostream & os, Pair p) {
    os << p.first << " - " << p.second;
    return os;
}

int main() {
    simpleDemo();
    simpleDemo(3);
    simpleDemo(3.0);
    simpleDemo(nullptr);
    simpleDemo("toto", 1);

    Pair p;
    p.first = 55;
    p.second = 66;
    cout << p << endl;

    return 0;
}