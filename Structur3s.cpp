#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
} r1 , r2, r3;

/*instead of declaring r1 separately, we can also declare it alongwith the structure as shown above
 *these will all become global variables (as declared above)
 *(struct Rectangle r1, r2, r3;) code for declaring r1 - this can be done outside or inside the main method
 */

int main(){
    cout << "Structures Test";
}