//parametreli ve parametresiz yapıcı fonskiyon tanımlamasını bir dairenin alanını hesaplayan fonskiyon yapalım.
#include <iostream>
using namespace std;

class yapicifonk
{

    /*degıskenlere yapıcı fonksiyon içerisinde ilk degerleri verilir*/
private:
    double PI, r;

public:
    //parametresiz yapıcı fonskiyon tanımlama
    yapicifonk()
    {
        PI = 3.14;
        r = 4;
    }
    //parametreli yapıcı fonksiyon
    yapicifonk(double x, double y)
    {
        PI = x;
        r = y;
    }
    double alan()
    {

        return PI * r * r;

    }

};				//class sonu

int
main()
{

    cout << "**test işlemi**" << endl;

    yapicifonk fd;

    yapicifonk fd2(3.14, 5);

    cout << "yarı çapı 4 cm olan bir dairenin alanı:" << fd.
        alan() << endl;

    cout << "yarıcapı 5cm olan bşr dairenın alanı:" << fd2.
        alan() << endl;

    return 0;

}				//main sonu 
