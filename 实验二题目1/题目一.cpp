#include<iostream>
int main()
{
	char m,a='a',z='z',A='A';
	std::cin >> m;
	if (m >= a && m <= z)
		std::cout << (char)(m + (A - a));
	else
		std::cout << m + 1;
	return 0;
}