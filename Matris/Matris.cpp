#include <iostream>
using namespace std;
int main() {
    int i, j;
    int a[5][5];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
        {
            if (j == i) {
                a[i][j] = 0;
            }
            else if (i > j) {
                a[i][j] = -1;
            }
            else
                a[i][j] = 1;
            cout << a[i][j] << "\t"; y

        }
        cout << endl;

    }
}