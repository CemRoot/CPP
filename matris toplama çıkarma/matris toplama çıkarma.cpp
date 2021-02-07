#include <iostream>
using namespace std;
int main() {
    int i, j;
    int a[2][2] = { {1,2},{3,4} };
    int b[2][2] = { {5,6},{7,9} };
    int c[2][2];

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];//+ yerine - yazarsak çıkarma olur :)
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;

}

