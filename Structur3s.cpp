#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
    char x;  //instead of taking 1 byte of data, this takes 4 bytes pf data - this is called padding
}; //r1 , r2, r3;

/*instead of declaring r1 separately, we can also declare it alongwith the structure as shown above
 *these will all become global variables (as declared above)
 *(struct Rectangle r1, r2, r3;) code for declaring r1 - this can be done outside or inside the main method
 */

int main(){

    struct Rectangle r1 = {10,5};

    printf("%lu" , sizeof(r1));
    cout << endl;

    r1.length = 15;
    r1.breadth = 7;

    cout << r1.length << endl;
    cout << r1.breadth << endl;

    return 0;
}