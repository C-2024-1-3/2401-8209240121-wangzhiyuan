#include<iostream>
int main()
{
	double a, b;
	char m;
	std::cout << "������������" ;
	std::cin >> a >> b;
	std::cout << "���������㷽ʽ";
	std::cin >> m;
	switch (m)
	{
	case '+' :std::cout << a + b; break;
	case '-':std::cout << a - b; break;
	case '*':std::cout << a * b; break;
	case '/':
		if (b != 0)
			std::cout << a / b;
		else
			std::cout << "��������Ϊ�㡣";
		break;

	case '%':
		if ((int)a == a && (int)b == b)
			std::cout << (int)a % (int)b;
		else
			std::cout << "ȡ�ಢ������С��";
		break;

	default:std::cout << "���Ϸ�";
		break;
	}
	return 0;
}