#include <iostream>
#include <stdio.h>

using namespace std;
int main () {

    int a = 10;
    int *p;
    // '*' is only used for declaration and dereferencing of a pointer
    //ampersand of a means address of a like &x would be address of x
    p = &a;

    cout << a << endl;
    printf("using pointer %d", *p);

    return 0;
}