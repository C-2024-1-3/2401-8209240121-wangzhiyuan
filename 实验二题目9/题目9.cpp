#include<iostream>
int main()
{
	int day = 0, num = 1;
	double total = 0;
	while (total+num*2<100)
	{
		
		day++;
		num = num * 2;
		total += num;
	}
	std::cout << total*0.8/day;
	return 0;
}