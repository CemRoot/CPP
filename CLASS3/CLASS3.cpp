#include <iostream>
#include <string>
using namespace std;
class arac {
protected:
    int ahiz = 0;//anlık hız
private:
    string renk = "Mavi";//renk değişkeni
    bool durum = false;//arac calısmıyor
public:
    void calis(int hiz) {
        durum = true;
        if (durum == true)
            ahiz += hiz;
    }
    void dur() {
        if (durum == true)
            ahiz = 0;
        durum = false;
    }
    void goster() {
        cout << "Calısma:" << durum << "\nHızı:" << ahiz << endl;
        cout << "Rengi:" << renk << endl;

    }
};//arac sınıfının sonu
//taksi sınıfı arac sınıfından turetildi ve yeni özellikler eklendi
class taksi : public arac {
public:
    void hizligit() {
        ahiz += 50;
        cout << "Suanki hızınınız:" << ahiz << endl;
    }

};
//kamyon sınıfı arac sınıfından uretıldı
class kamyon :public arac {  };
int main() {
    //turetilmiş sınıflarından yeni nesneler uretiyoruz
    taksi reno;
    kamyon bmc;
    cout << "reno ozellikleri" << endl;
    reno.calis(100);
    reno.goster();
    reno.hizligit();
    cout << "BMC ozellikleri" << endl;
    bmc.calis(10);
    bmc.goster();
    bmc.dur();

}//main sonu