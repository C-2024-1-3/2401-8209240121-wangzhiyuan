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
	std::cout << "��һ���У�" << left;
	return 0;
}