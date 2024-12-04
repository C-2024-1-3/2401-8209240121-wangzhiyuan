#include<iostream>
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int size = size1 + size2;
	int m = 0, n = 0;
	for (int i = 0; i < size; i++)
	{
		if (list1[m] > list2[n])
		{
			list3[i] = list2[n];
			n++;
		}
		else {
			list3[i] = list1[m];
			m++;
		}
	}
}
int main() {
    int list1[80], list2[80], list3[160];
    int size1, size2;
    std::cout << "请输入第一个已排序数组的元素个数：";
    std::cin >> size1;
    std::cout << "请依次输入第一个已排序数组的元素：";
    for (int i = 0; i < size1; i++) {
        std::cin >> list1[i];
    }
    std::cout << "请输入第二个已排序数组的元素个数：";
    std::cin >> size2;
    std::cout << "请依次输入第二个已排序数组的元素：";
    for (int i = 0; i < size2; i++) {
        std::cin >> list2[i];
    }
    merge(list1, size1, list2, size2, list3);
    std::cout << "合并后的数组为：";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << list3[i] << " ";
    }
    return 0;
}