#include<iostream>
#include<string>
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	std::string str;
	std::cout << "�����룺";
	std::getline(std::cin, str);
	for (int i = 0; i < str.size(); i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			a++;
		else if (str[i] == ' ')
			b++;
		else if (str[i] >= '0' && str[i] <= '9')
			c++;
		else
			d++;
	}
	std::cout << "��ĸ����" << a << "\n" << "�ո�����" << b << "\n" << "��������" << c << "\n" << "��������" << d << "\n";
	return 0;
}