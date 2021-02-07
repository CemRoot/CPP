#include <iostream>
using namespace std;

int
main()
{

	int k1, k2;

	cout << "First number:";

	cin >> k1;

	cout << "Second number:";

	cin >> k2;

	int C = 2 * (k1 + k2);

	int A = k1 * k2;

	cout << "Cevre: " << C << "\nAlan: " << A;

}
