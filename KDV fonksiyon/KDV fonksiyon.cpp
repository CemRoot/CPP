#include <iostream>
using namespace std;
class urun {
    //urun sınıf uyelerı
private:
    float kdv;
    int adet;
public:
    void setkdv(float  k) { kdv = k; }
    void setadet(int a) { adet = a; }
    //get fonk
    int getfiyat() {
        return(1000 * kdv * adet);
    }
};//class bitti

int main() {
    urun nesne; //sınıftan nesne uretıldı
    double fiyat;
    nesne.setkdv(0.18);
    nesne.setadet(10);
    fiyat = nesne.getfiyat();
    cout << "fiyatı:" << fiyat << "TL" << endl;
}
