#include <stdlib.h>
#include <iostream>

using namespace std;

int main () {
    int *p;   //declaring pointer
    p = new int[5]; //creating array in heap
    cout << p;    //printing address of pointer
    return 0;
}
