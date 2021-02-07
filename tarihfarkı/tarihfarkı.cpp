#include <iostream>
using namespace std;
struct date
{
	int year{ 0 };
	int month{ 0 };
	int day{ 0 };
	int hour{ 0 };
	int minutes{ 0 };
};

void init_date(date& obj)
{
	cin >> obj.year >> obj.month >> obj.day>>obj.hour>>obj.minutes;
}


date difference(date const&obj1, date const&obj2)
{
	date ret;

	ret.year = obj1.year - obj2.year;
	ret.month = obj1.month - obj2.month;
	ret.day = obj1.day - obj2.day;
	ret.hour = obj1.hour - obj2.hour;
	ret.minutes = obj1.minutes - obj2.minutes;

	if (ret.day < 0)
	{
		ret.month--;
		ret.day += 31;
	}

	if (ret.month < 0)
	{
		ret.year--;
		ret.month += 12;
	}

	if (ret.minutes < 0)
	{
		ret.hour--;
		ret.minutes += 59;
	}

	return ret;
}

void print_result(date const& obj)
{
	cout << "Difference between dates is " << obj.day << " days " << obj.month << " months and " << obj.year << " years \n";
	cout << "Difference between time is  " << obj.hour << " Hours " << obj.minutes << " Minute";
}

int main()
{
	date obj1;
	date obj2;

	cout << "First date&time format (YYYY MM DD HH MM)\n";
	init_date(obj1);

	cout << "Second date&time format (YYYY MM DD) (24) HH MM)\n" ;
	init_date(obj2);

	

	date diff = difference(obj1, obj2);
		
		print_result(diff);
	
	return 0;
}
