#include <iostream>
#include <cstdlib>
#include <ctime>//rand fonk çalışabilmesi için 
using namespace std;

const int  mevcut = 15;//15 sayı sabit 

void notlarial(int* Nt) {// not rasgale alınıyor.

    srand(time(0));//rasgale sayı almak için  tanımlandı 

    for (int i = 0; i < mevcut; i++) {
        Nt[i] = 1 + rand() % 100;//100 e kadar gitsin 0 dan başladığı için "+1" `rand` diye  yazıldı 
        cout << " " << Nt[i];//notları yazdır 

    }
}
int main() {//main tanımladım.
    cout << "===Ders Başarı Notları===";//görsellik

    int i, kalan = 0, progNot[mevcut];//tanımlamalar

    int gNot = 50; //gecme notu 50 yaptık.
    cout << "\nNotlar...:";//Notları istedik 

    notlarial(progNot);

    for (i = 0; i < mevcut; i++) {
        if (progNot[i] < gNot)
            kalan++;
    }
    cout << "\nKalan sayısı..:" << kalan;
    cout << "\nGecen sayısı..:" << mevcut - kalan;
    return 0;
}