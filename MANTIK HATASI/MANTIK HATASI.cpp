#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a = pow(9, (1 / 2));
    cout << a; //çıktısı: 1 
    return 0;
}
//program bir hata mesajı vermiyor ama istenen çıktıyıda vermiyor 
//hatanın kaynağı (1/2)'nin 0 olarak algılanmasıdır. İşte buna mantık hatası diyoruz.


/* #include <iostream>
#include <cmath>
using namespace std;
int main(){
        double a= pow(9,(1/2.0));
        cout<<a; //çıktısı: 3
       return 0 ;
       kod istediğimiz gibi çalışıyordur.
 } */
