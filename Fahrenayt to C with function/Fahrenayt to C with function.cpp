#include <iostream>
using namespace std;


double
ceviri(double n)
{

	return ((n - 32) / 1.8);

}


int
main()				//main calling
{

	int F;

	double C;

	cout << "Enter the fahrenayt:  ";

	cin >> F;


	C = ceviri(F);

	cout << C << "C";

	return 0;

}
