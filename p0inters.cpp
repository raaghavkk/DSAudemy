#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main () {

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    //printing onto console size of each pointer
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    //regardless of data type every pointer is 8 byte

    return 0;
}