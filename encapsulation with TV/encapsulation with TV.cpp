#include <iostream>
using namespace std;

class tv
{

    //tv sınıfı uyeleri(degıskenler,fonksiyonlar)tanımlıyor
private:
    int boy, en, yukseklik;

    //setler fonksi
public:
    void setuz(int p)
    {
        boy = p;
    }
    void seten(int p)
    {
        en = p;
    }
    void setyuk(int p)
    {
        yukseklik = p;
    }
    //getter fonk
    int getses()
    {

        return (boy * en * yukseklik);

    }


};				//class sonu

int
main()
{

    tv nesne;

    float ses;

    nesne.setuz(10);

    nesne.seten(5);

    nesne.setyuk(8);

    ses = nesne.getses();

    cout << "ses ayari:" << ses << endl;


}				//int main sonu
