#include<iostream>
int main()
{
	int t;
	std::cout << "请输入摄氏度：";
	std::cin >> t;
	printf("华氏度为：%.2lf", t * 1.8 + 32);
	return 0;
}