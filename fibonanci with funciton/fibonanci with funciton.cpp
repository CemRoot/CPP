#include <iostream>
using namespace std;


int
fib(int n)
{

    int fb;


    if (n <= 1)
        return n;

    else
        return fib(n - 1) + fib(n - 2);


}


int
main()
{


    int a;


    cout << "Kacinci eleman: ";

    cin >> a;


    cout << a << ".eleman: " << fib(a);

    return 0;

}


//N. eleman ne kadar C'ok yC<ksek girilirse n elemanD1 hesaplanmasD1 okadar uzun sC<rer 
