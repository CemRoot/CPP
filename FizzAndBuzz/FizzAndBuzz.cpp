#include <iostream>
using namespace std;


//fizzbuzz function
void
fizzbuzz()
{

	for (int x = 1; x <= 100; x++)

	{

		if (x % 15 == 0)
		{

			cout << "Fizzbuzz\n";

		}

		else if (x % 3 == 0)
		{

			cout << "Fizz\n";

		}

		else if (x % 5 == 0)
		{

			cout << "Buzz\n";

		}

		else
		{

			cout << x << "\t";

		}

	}				//for end
}				//fizzbuzz function end 

int
main()				//main start
{

	fizzbuzz();

	//function calling
	return 0;

}
