#include<iostream>
int daybefore(int m)
{
	return (m + 1) * 2;
}
int main()
{
	int left = 1;
	for (int i = 9; i > 0; i--)
	{
		left = daybefore(left);
	}
	std::cout << "第一天有：" << left;
	return 0;
}