#include<iostream>
int main()
{
	double a, b;
	char m;
	std::cout << "请输入两个数" ;
	std::cin >> a >> b;
	std::cout << "请输入运算方式";
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
			std::cout << "除数不能为零。";
		break;

	case '%':
		if ((int)a == a && (int)b == b)
			std::cout << (int)a % (int)b;
		else
			std::cout << "取余并不能有小数";
		break;

	default:std::cout << "不合法";
		break;
	}
	return 0;
}