#include<iostream>
class Time
{
private:
	int hour, minute, sec;
public:
	Time(int hour,int minute,int sec)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	void time()
	{
		std::cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	int hour, minute, sec;
	std::cin >> hour >> minute >> sec;
	Time time(hour, minute, sec);
	time.time();
	return 0;
}