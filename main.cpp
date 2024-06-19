#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    // this will create an array of size 5 and each integer in this array can be accessed using its index
    // each integer takes 4 bytes of memory so for this array it will take 4*5 = 20 bytes
    int A[5] = {2,4,6,8,10};

    // you can make an array dynamic by not preallocating it's size as shown below
    int B[] = {1,3,5,7,9,13};

    // If an array is defined to have a size greater than the number of elements within it, the free slots are filled with zeros
    int C[10] = {1,2,3,4,5,6,7,8};

    // to display an array we use a for loop
    for(int i=0;i<5;i++) {
        cout << A[i] << endl;
    }

    cout << "---------" << endl;

    // there is also a for each loop method to display an array
    for(int x:B){
        cout << x << endl;
    }

    // how to make an array of our desired size using input from the console
    int n;
    cout << "Enter Size: ";
    cin >> n;
    int D[n];
    D[0] = 2;

    //printing dynamic array
    /*(for(int x:D){
     *  cout << x << endl;
     *}
     */

    // from this we learn variable sized arrays cannot be initialised from console (atleast easily as per this course)

    cout << "size of array A: " << sizeof(A) << endl;
    cout << "size of array B: " << sizeof(B) << endl;
    cout << "integer on 8th index of array C: " << C[8] << endl;
    cout << "integer on 1st index of array A: "<< A[1] << endl;
    printf("%d\n" , A[2]);

    return 0;
}
