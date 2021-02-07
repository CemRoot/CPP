/*#include <iostream>
#include <limits.h>//maxx için lazım
using namespace std;
int main(){
        short x = SHRT_MAX; //x=32727
        short y = x + 1;
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        return 0 ;
        //ÇIKTI:-32728 DİR

}*/


#include <iostream>
#include <limits.h>//maxx için lazım 
using namespace std;
int main() {
    try {
        short x = SHRT_MAX; //x=32727
        short y = x + 1;
        cout << "x = " << x << endl;
        if (y < 0)

            throw int(y);

        cout << "y = " << y << endl;
    }
    catch (int y) {
        cout << "y= " << ~y + 1 << endl;
    }
    return 0;
}/* sol sütündaki programın çıktasına diikat edilirse short tipindeki değişkeninde taşma olduğu iiçn program y=-32768 gibi negatif bir değer üretir.Bu hatayo sağ sutunda try bloğunda fırlattık/yönledirme ve cout<<"y="<<~y+1<<endl; komutu satırı ile dogru sonuc üretik
~y+1 ifadesi ile y değişkenşnşnde değieri bit düzeyinde ters cevriliğp 1 eklendi ki bu işleme " 2 ye tümleyen işlemi" denmektedir.
2'ye tümleyen işlemdi ile negatif sayının pozitif bir eş değeri elde edilir.*/