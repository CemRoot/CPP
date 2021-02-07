#include <iostream>
using namespace std;
int main() {

    string a[] = { " ","ocak","subat","mart","nisan","mayis","haziran","temmuz","ogustos","eylul","ekim","kasım",
    "aralik" };

    int ay;

    cout << "1-12 arasında sayı girin: " << endl;
    cin >> ay;

    if (ay > 0 && ay < 13) {
        cout << ay << ".ay :" << a[ay] << endl;

    }
    else
        cout << "hatalı bir rakam girdiniz!";
    return 0;
}