#include<iostream>
int main()
{
	double x, y;
	std::cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
		std::cout << y;
	}
		
	else if (x >= 1 && x < 5)
	{
		y = 1 + 2 / (4 * x);
		std::cout << y;
	}
		
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		std::cout << y;
	}

	return 0;
}