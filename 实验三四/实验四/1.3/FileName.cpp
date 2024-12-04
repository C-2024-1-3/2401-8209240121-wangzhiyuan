#include<iostream>
int main()
{
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = false;
	}
	for (int i = 0; i < 100; i++)
	{
		int m = -1;
		while (m +1+i< 100)
		{
			m += i + 1;
			if (arr[m] == true)
				arr[m] = false;
			else if (arr[m] == false)
				arr[m] = true;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		std::cout << i + 1 << " " << arr[i] << std::endl;
	}
	return 0;
}