#include<iostream>
int main()
{
	double a, b, c;
	std::cin >> a>>b>> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
			std::cout << "�ǵ���������";
		else
			std::cout << "���ǵ���������";
	}
	else
		std::cout << "�޷�����������";
	return 0;
}