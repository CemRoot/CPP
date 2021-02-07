#include <iostream>
using namespace std;

int
main()
{

	int a, b;

	cout << "Birinci sayinizi giriniz:" << endl;

	cin >> a;

	cout << "Ikinci sayinizi giriniz:" << endl;

	cin >> b;

	int T = a + b;

	int F = a - b;

	int C = a * b;

	float B = a / b;

	cout << "Toplam: " << T << "\nFark: " << F << endl;

	cout << "Carpim: " << C << "\nBolme: " << float(B) << endl;


}
