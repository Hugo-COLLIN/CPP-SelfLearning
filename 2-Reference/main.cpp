#include <iostream>

using namespace std;

// --- Passage de paramètres par copies (C/C++) ---
void swap(int a, int b) {
    cout << "a==" << a << " - b==" << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a==" << a << " - b==" << b << endl;
}

// --- Passage de paramètres par pointeurs (C/C++) ---
void swap(int * a, int * b) {
    cout << "a==" << *a << " - b==" << *b << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a==" << *a << " - b==" << *b << endl;
}

// --- Passage de paramètres par references (C++ uniquement - syntaxe par copie, mais logique des pointeurs) ---
void swapR(int & a, int & b) {
    cout << "a==" << a << " - b==" << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a==" << a << " - b==" << b << endl;
}


// valeur de retour par référence
int & mini (const int & a, const int & b) {
    return const_cast<int &>( a < b ? a : b );
}

int main() {

    int first = 33;
    int second = 44;

    //swap copies
    swap(first, second);
    cout << "first==" << first << " - second==" << second << endl;

//    // swap refs
//    swap(& first, & second);
//    cout << "first==" << first << " - second==" << second << endl;

    // swap refs
    swapR(first, second);
    cout << "first==" << first << " - second==" << second << endl;

    int a = 55;
    int & alias = a; //pointeur caché vers a ; le & commercial calcule la référence vers la valeur pointée

    alias = 66;
    cout << "main a==" << a << endl ;

//    int & result = mini (first, second); //Modifie la variable pointée par la référence renvoyée, ici second qui vaut 33
    int result = mini (first, second); //Crée une nouvelle variable result qui est une copie de la référence renvoyée
    result ++;
    cout << result << " - second==" << second << endl;


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