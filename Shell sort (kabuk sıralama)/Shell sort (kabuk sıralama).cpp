#include <iostream>
using namespace std;
int i, bos, n, g;//global degısken
void shellsort(int a[]) {
    bool durum;
    g = n / 2;
    while (g >= 1) {
        do {
            durum = true;
            for (i = 0; i < n - g; i++) {
                if (a[i] > a[i + g]) {
                    //yer degıstırme
                    bos = a[i];
                    a[i] = a[i + g];
                    a[i + g] = bos;
                    durum = false;
                }//if durum bitisi
            }//for bitis
        }//do bitis
        while (!durum);
        g = g / 2;
    }//while sonu
}//fonk bitis
//ana main,
int main() {
    cout << "Dizi boyutunu giriniz:" << endl;
    cin >> n;
    int a[n]; //n elemanlı dizi
    cout << "a dizinin sıralanmış hali\n" << " ";
    for (i = 0; i < n; i++) {
        a[i] = (1 + (int)(rand() % 100));
        cout << a[i] << " ";
    }
    shellsort(a);
    cout << "\na dizinin sıralı hali\n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}