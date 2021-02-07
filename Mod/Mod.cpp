#include <iostream>
#include <math.h>
using namespace std;

int
main()
{

    int a, b;

    cout << "programdan Cikmak icin 0'a  bas!" << endl << endl;

    do
    {


        cout << "Mod'u alinacak sayilari giriniz:" << endl;

        cin >> a;

        cout << "hangi Modun alanacagi sayilari giriniz: " << endl;

        cin >> b;

        cout << a << " Mod " << b << " = " << a % b << endl << endl;

    }

    while (a != 0);

    cout << "0 sayisi girildi ve Cikildi!";


}
