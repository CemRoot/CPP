/* tek bir try bloğu içerisnden fırlatılan istisnaların nasıl catch blokların ile yakalanacağını gçsteren basit bir uygulamayı kodluyoruz.
bu programda 3 adet fırtılan istisna 3 adet catch blogu ıle yakalanmaya calısılıyor*/
#include <iostream>
using namespace std;
int main() {
    int a = 2; // a nın degerıne gore ıstısna fırlatılır.
    try {
        if (a == 1)
            throw a;//1-tamsayı ıstısnası 
        else if (a == 2)
            throw 'A'; //2-karakter istisnası
        else if (a == 3)
            throw 4.5;//3-float istisnası 

    }
    catch (int a) {
        cout << "\nint istisnası yakalandı";
    }
    catch (char ch) {
        cout << "\nchar istisnası yakalandı";

    }
    catch (float d) {
        cout << "\nfloat istisnası yakalandı";

    }
    cout << "\nProgram sonlandırıldı.";
    return 0;
}