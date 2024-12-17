#include<iostream>
class Point
{
private:
	int x, y;
public:
	Point(int x = 60, int y = 80)
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		std::cout << "(" << x << "," << y << ")";
	}
};
int main()
{
	Point point;
	point.setPoint(10, 10);
	point.display();
	return 0;
}