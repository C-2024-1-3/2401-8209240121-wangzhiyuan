#include<iostream>
#include<string>
int indexof(const char* s1, const char* s2)
{
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	int a = 0, b = 0, c = 0;
	for (int i = 0; i < s2 - s1; i++)
	{
		a = 0, b = 0;
		if (s1[0] == s2[i])
		{
			a++;
			for (int j = 0; j < size1; j++)
			{
				if (s1[i] != s2[i + j])
				{
					b++;
					break;
				}
			}
		}
		if (a == b)
		{
			c = i;
		}
	}
	if (a == b)
	{
		return c;
	}
	else {
		return -1;
	}
}
int main()
{
	char s1[200], s2[200];
	std::cin >> s1 >> s2;
	int num=indexof(s1, s2);
	std::cout << num;
	return 0;
}