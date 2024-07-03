#include <iostream>

using namespace std;

struct Rectangle{
    int length;  //4 bytes for integer
    int breadth;
};

int main(){

    Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); //this will allocate the memory of the structure in the heap memory
    //typecasting

    p -> length = 15;
    p -> breadth = 7;

    cout << p -> length << endl;
    cout << p -> breadth << endl;

    return 0;
}
