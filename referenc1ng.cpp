#include <iostream>

using namespace std;

int main () {
    int a = 10;
    int &r = a; //r is nothing but a (they are both stored in the same memory in stack)

    cout << a << endl << r << endl;

    return 0;
}
