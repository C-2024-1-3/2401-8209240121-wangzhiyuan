#include<iostream>
int indexOf(const char s1[], const char s2[])
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	for (int i = 0; i < l2 - l1; i++)
	{
		bool boolen = false;
		if (s2[i] == s1[0])
		{
			for (int j = 0; j < l1; j++)
			{
				if (s2[j + i] != s1[j])
					boolen = true;
			}
		}
		if (boolen == false)
			return i;
		else
		{
			return -1;
		}
	}
}
int main() {
	char s1[100];
	char s2[100];
	int result = indexOf(s1, s2);
	if (result != -1) {
		std::cout << s1 << " �� " << s2 << " ���Ӵ����±�Ϊ��" << result << std::endl;
	}
	else {
		std::cout << s1 << " ���� " << s2 << " ���Ӵ�" << std::endl;
	}

	return 0;
}