#include <iostream>
#include <stdio.h>

using namespace std;
int main () {

    int *p;
    p = new int [5];  //array of size 5 created in heap (C++ code)
    p[0] = 10; p[1] = 15; p[2] = 20; p[3] = 21; p[4] = 31;  //values initialized in array

    for (int i = 0; i < 5;i++)
        cout << p[i] <<endl;
    // p is a pointer which will act like the name of an array
    // and the array in this case is created inside the stack

    return 0;
}