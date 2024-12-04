#include<iostream>
#include<string>
void count(const char s[], int counts[])
{
	int size = strlen(s);
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		char let = s[i];
		if (let >= 'A' && let <= 'Z')
		{
			counts[let - 'A']++;
		}else if (let >= 'a' && let <= 'z')
		{
			counts[let - 'a']++;
		}
	}
}
int main()
{
	char s[200];
	int counts[26];
	std::cout << "Enter a string:";
	std::cin.getline(s, 200);
	std::cout << std::endl;
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			char m = i + 'a';
			std::cout << m << ':' << counts[i] << " times" << std::endl;

		}
	}
	return 0;
}