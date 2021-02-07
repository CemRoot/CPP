#include <iostream>
#include <cmath>
using namespace std;

int
main()
{

	int a, b;

	cout << "birinci kenari giriniz: ";

	cin >> a;

	cout << "ikinci kenari giriniz: ";

	cin >> b;

	double c = sqrt(a * a + b * b);

	cout << "hipotenus: " << c;

}
