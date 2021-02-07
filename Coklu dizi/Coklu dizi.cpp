#include <iostream>
using namespace std;
int main() {
    int b[3][5] = { {8,1,2,2,9},{1,9,4,0,3},{0,3,0,0,7} };
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            cout << " " << b[i][j];
        } cout << endl;
    }
    return 0;
}