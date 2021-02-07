#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    char a[]{ 'a','b','c','d' , 'e','f','g','h','i','j' };
    char b[10];
    int i;

    cout << "A[10]=";
    for (i = 0; i < 10; i++) {
        cout << " " << a[i];
    }
    cout << "\nB[10]=";

    for (i = 10; i > 0; i--) {
        b[i] = a[9 - i];
        cout << " " << b[i];
    }
    return 0;
}