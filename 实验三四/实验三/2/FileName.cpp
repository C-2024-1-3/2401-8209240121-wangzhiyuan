#include<iostream>
bool is_prime(int num)
{
	if (num == 2)
		return true;
	else if (num == 1)
		return false;
	else
	{
		bool mm = false;
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
				mm = true;
		}
		if (mm == false)
			return true;
		else
			return false;
	}
}
int main()
{
	int sum = 0;
	for (int i = 1;; i++)
	{
		if (is_prime(i) == true)
		{
			std::cout << i << "\t";
			sum++;
			if (sum % 10 == 0)
				std::cout<<std::endl;
			if (sum == 200)
				break;
		}
	}
	return 0;
}