#include<iostream>
int main()
{
	double a, b, c;
	std::cin >> a>>b>> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
			std::cout << "是等腰三角形";
		else
			std::cout << "不是等腰三角形";
	}
	else
		std::cout << "无法构成三角形";
	return 0;
}