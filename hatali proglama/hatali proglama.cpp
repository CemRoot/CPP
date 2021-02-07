//çalışma zamanı hatalı proglama

/*#include <iostream>
using namespace std;
int main(){
        double pay,payda,sonuc;
        cout<<"sayı-1:";
        cin>>pay;
        cout<<"sayı-2:";
        cin>>payda;
        sonuc=pay/payda;
        cout<<"sonuc "<<sonuc;
        return 0;
}*/

//hata yakalama kodları ile yazılmış kodlama
#include <iostream>
using namespace std;
int main() {
    try {
        double pay, payda, sonuc;
        cout << "sayı-1:";
        cin >> pay;
        cout << "sayı-2:";
        cin >> payda;

        if (payda == 0)
            throw 0;
        sonuc = pay / payda;
        cout << "sonuc " << sonuc;
    }
    catch (int) {
        cerr << "Payda 0 olamaz!!";//cout<<"Payda 0 olamaz"
    }
    return 0;
}