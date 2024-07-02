#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r = {10,5}; // in C++ writing only Rectangle r is also valid, however in C lang you need to say struct before that
    cout << r.length << endl;
    cout << r.breadth << endl;

    Rectangle *p = &r;
    cout << p -> length << endl;
    cout << p -> breadth << endl;

    return 0;
}
