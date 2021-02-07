#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream dOku("C\\test\\metın.txt");
    string str;
    while (!dOku.eof())
    {
        str = dOku.get();
        if (dOku.eof()) break;
        cout << str;
    }
    dOku.close();
    return 0;
}
//bu kod ile dosya açıyoruz.
//-------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream dY("C:\\TEST\\MetinC.txt");
    string str;
    cout << "metin giriniz:" << endl;
    cin >> str >> endl;
    dY << str << endl;
    dY.close()
}//bu kod bizim metin dosyası olusturup içine yazmamızı sağlıyor dosyaya yazan program
//--------------------------------------------------------------------------------------------------
#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ifstream d1("met.txt");
    ofstream d2("metin.txt");
    string str;
    while (!d1.eof())
    {
        str = d1.get();
        if (d1.eof())
            break;
        d2 << str;

    }
    d1.close();
    d2.close();
    return 0;
}//metin dosyasına veri eklemek(iki veriyi birlşektirmek)