#include <iostream>

using namespace std;

// --- Passage de paramètres par copies ---
void swap(int a, int b) {
    cout << "a==" << a << " - b==" << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a==" << a << " - b==" << b << endl;
}

// --- Passage de paramètres par pointeurs ---
void swap(int * a, int * b) {
    cout << "a==" << *a << " - b==" << *b << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a==" << *a << " - b==" << *b << endl;
}


int main() {

    int first = 33;
    int second = 44;

    //swap copies
    swap(first, second);
    cout << "first==" << first << " - second==" << second << endl;

    // swap refs
    swap(& first, & second);
    cout << "first==" << first << " - second==" << second << endl;

    return 0;
}


/* Output:

a==33 - b==44
a==44 - b==33
first==33 - second==44
a==33 - b==44
a==44 - b==33
first==44 - second==33
 */