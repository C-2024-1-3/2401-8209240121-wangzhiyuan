#include<iostream>
class object
{
private:
	int length, width, height;
public:
	void set_value()
	{
		std::cin >> length >> width >> height;
	}
	void volume()
	{
		std::cout<<length * width * height<<std::endl;
	}
};
int main()
{
	object o1, o2, o3;
	o1.set_value();
	o2.set_value();
	o3.set_value();
	o1.volume();
	o2.volume();
	o3.volume();
	return 0;
}