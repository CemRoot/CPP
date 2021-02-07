#include <iostream>
#include <cassert>
using namespace std;

int
main()
{

    int pay, payda;

    double sonuc;

    cout << "NUM-1: ";

    cin >> pay;

    cout << "NUM-2: ";

    cin >> payda;

    //eger payda!=0 ise
    assert(payda != 0);	//istisna satiri
    sonuc = pay / payda;

    cout << "TOTAL:" << sonuc;


    return 0;


}
