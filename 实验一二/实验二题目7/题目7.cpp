#include<iostream>
int main()
{
	int m = 5;
	for (int i = 0; i < 5; i++)
	{
		for (int n = i; n >= 0; n--)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}