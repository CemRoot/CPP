#include <iostream>
#include <math.h>
using namespace std;

int
main()
{

    double ort = 1.0;

    int n = 0, sayi = 0;

    do
    {

        cout << "bir sayi giriniz!\n(Cikmak icin 0 tuslayiniz!)";

        cin >> sayi;

        if (sayi != 0)
        {

            ort *= sayi;

            n++;

        }

    }

    while (sayi != 0);

    ort = pow(ort, 1.0 / (double)n);

    cout << "Geometrik ortalama= " << ort << endl;




    cout << "Program sonu!" << endl;
																																																														cout<<"Create by Cem Koyluoglu"<<endl;

}
