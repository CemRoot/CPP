#include <iostream>
using namespace std;
int main() {
    int K[] = { 200,100,50,20,10,5,1 };
    int sa;
    int para;
    cout << "Paranizi giriniz: " << endl;
    cin >> para;
    for (int i = 0; i <= 6; i++) {
        sa = para / K[i];
        para = para - sa * K[i];
        if (sa != 0) {
            cout << sa << " adet " << K[i] << "TL" << endl;
        }
    }
    cout << "vermelisiniz.";
}
