#include<iostream>
int function1(int& m, int& n)
{
	int x=1;
	for (int i = m > n ? n : m; i > 0; i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			x = i;
			break;
		}
	}
	return x;
}
int function2(int& m, int& n)
{
	int y=m*n;
	for (int i = m > n ? m : n;; i++)
	{
		if (i%m== 0 &&i%n == 0)
		{
			y = i;
			break;
		}
	}
	return y;
}
int main()
{
	int m, n;
	std::cin >> m >> n;
	std::cout << "最大公约数：" << function1(m, n) << std::endl;
	std::cout << "最小公倍数：" << function2(m, n);
	return 0;
}