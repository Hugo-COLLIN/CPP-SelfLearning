#include <iostream>
#include "A.h"
#include "B.h"

using namespace std; // Ne jamais utiliser
using namespace B;
//using namespace MyNamespace; // Error: ambiguity for a function

namespace alibaba {
    namespace App {
        void test() {
            cout << "It works" << endl;
        }
    }
}

int main() {
    cout << MyNamespace::function(3) << endl;
    cout << function(3) << endl; //Namespace B

    alibaba::App::test();

    using namespace alibaba::App;
    test();

    return 0;
}