//try-catch yapısı
/*
try
{
        normal program kodu buraya yazılır...
        komut satırları...
        koşul<throw>istisna;

}
catch(...){
        try blogundaki kod; bir bir çalışma zamanını hatası üretecek olursa yapılacak işlemler buraya yazılır.
}*/
#include<iostream>
using namespace std;
int main() {
    try {
        throw "hata mesajı";
    }
    catch (char* e) {
        cerr << "hata yakalandı" << e << endl;
    }
    cout << "try-catch sonrası program devam eder! ";

    return 0;
}
/*eğer throw ile atılan mesajdan sonra program; exit() gibi bir fonksiyon ile sonlandırılmazsa programın akışı devam eder. Bu sebeple programla ilgili çok hayati bir hata yakalanırsa catch bloğu "exit(-1)" komutu ile programı sonlandırır.*/
