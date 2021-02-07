#include <iostream>
using namespace std;

#define PI 3.14
int
main()
{

	double r;

	cout << "yari capi giriniz: ";

	cin >> r;

	double alan = 4 * PI * r * r;


	double cevre = (4 / 3) * PI * r * r * r;


	cout << "alan: " << alan << "\ncevre: " << cevre;

}
