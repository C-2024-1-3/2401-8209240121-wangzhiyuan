#include<iostream>
#include <algorithm>
int main()
{
	int size;
	std::cout << "ÇëÊäÈëÊýÁ¿";
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	std::sort(arr, arr+size);
	for (int i = 0; i < size; i++)
	{
		int* p = arr + i;
		std::cout << *p << std::endl;
	}
	delete[] arr;
	return 0;
}