#include <iostream>
using namespace std;

//#define TASK_1
//#define TASK_2


void main()
{
	setlocale(LC_ALL, "");
	
#ifdef TASK_1
	int x = 0, a, b, c;
	for (int i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if (c == b || b == a || c == a)
		{
			x++;
		}

	}
	std::cout << " Чисел " << x << std::endl;
#endif // TASK_1
	
#ifdef TASK_2
	int x = 0, a, b, c;
	for (int i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if (c != b && b != a && c != a)
		{
			x++;
		}
	}
	std::cout << " Чисел " << x << std::endl;
#endif // TASK_2

	int a = 0, b = 0, k;
std:cout << "Введите любое целое число :" << std::endl; std::cin >> a;
	(a % 2 == 0) ? cout << a << " = Это целое число \n " : cout << a << " = Это не целое число\n "; //не успел, доделаю позже
}
