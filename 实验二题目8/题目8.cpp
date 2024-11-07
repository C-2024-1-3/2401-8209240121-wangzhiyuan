#include<iostream>
int main()
{
	double a;
	std::cout << "ÇëÊäÈëa";
	std::cin >> a;
	double m = a, n=a;
	if (a > 0)
	{
		while (a > 0)
		{
			m = n;
			n = (m + a / m) / 2;
			if (n - m < 1e-5 && n - m > -1e-5)
				break;
		}
		std::cout << n;
	}
	
	else if (a == 0)
		std::cout << "0";
	else if (a < 0)
		std::cout << "ÎŞ";

	
	return 0;

}