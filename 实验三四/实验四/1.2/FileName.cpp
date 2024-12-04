#include<iostream>
void swap(double& a, double& b)
{
	double m = a;
	a = b;
	b = m;
}
void sort(double arr[],int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size-1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}
int main() {
    double numbers[10];
    std::cout << "双精度数字：" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }
    sort(numbers, 10);
    std::cout << "排序后的数字为：" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}