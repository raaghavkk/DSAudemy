#include <iostream>
#include <stdio.h>

using namespace std;
int main () {
// how to initialise a pointer with an array
    int A[5] = {2,4,6,8,10};
    int *p;
    p = A;

    for (int i = 0; i < 5;i++)
        cout << p[i] <<endl;
    // p is a pointer which will act like the name of an array
    // and the array in this case is created inside the stack

    return 0;
}