#include<iostream>
#include<algorithm>
int main()
{
	int a, b, c, d;
	std::cin >> a >> b;
	int MAX = std::max(a, b);
	int MIN = std::min(a, b);
	for (int i = 1; i <= MIN; i++)
	{
		if (a % i == 0 && b % i == 0)
			c = i;
	}
	for (int i = a * b; i >= MAX; i--)
	{
		if (i % a == 0 && i % b == 0)
			d = i;
	}
	std::cout << "最大公约数" << c << "最小公倍数" << d;
}