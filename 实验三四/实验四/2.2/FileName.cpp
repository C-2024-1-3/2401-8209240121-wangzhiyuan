#include<iostream>
#include<string>
int intPow(int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; ++i) {
		result *= base;
	}
	return result;
}
int parseHex(const char* const hexString)
{
	int size = strlen(hexString);
	int num = 0;
	for (int i = 0; i < size; i++)
	{
		if (hexString[i] == '0') {num += 0 * intPow(16, size - i - 1);}
		if (hexString[i] == '1') { num += 1 * intPow(16, size - i - 1); }
		if (hexString[i] == '2') { num += 2 * intPow(16, size - i - 1); }
		if (hexString[i] == '3') { num += 3 * intPow(16, size - i - 1); }
		if (hexString[i] == '4') { num += 4 * intPow(16, size - i - 1); }
		if (hexString[i] == '5') { num += 5 * intPow(16, size - i - 1); }
		if (hexString[i] == '6') { num += 6 * intPow(16, size - i - 1); }
		if (hexString[i] == '7') { num += 7 * intPow(16, size - i - 1); }
		if (hexString[i] == '8') { num += 8 * intPow(16, size - i - 1); }
		if (hexString[i] == '9') { num += 9 * intPow(16, size - i - 1); }
		if (hexString[i] == 'a' || hexString[i] == 'A') { num += 10 * intPow(16, size - i - 1); }
		if (hexString[i] == 'b'|| hexString[i] == 'B') { num += 11 * intPow(16, size - i - 1); }
		if (hexString[i] == 'c' || hexString[i] == 'C') { num += 12 * intPow(16, size - i - 1); }
		if (hexString[i] == 'd' || hexString[i] == 'D') { num += 13 * intPow(16, size - i - 1); }
		if (hexString[i] == 'e' || hexString[i] == 'E') { num += 14 * intPow(16, size - i - 1); }
		if (hexString[i] == 'f' || hexString[i] == 'F') { num += 15 * intPow(16, size - i - 1); }
	}
	return num;
}
int main()
{
	char jz[] = "A5";
	std::cout << parseHex(jz);
	return 0;
}