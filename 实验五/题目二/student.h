#pragma once
class Student              //类声明student.h
{
public:                   //公用成员函数原型声明
	void display();
	void set_value();
private:
	int num;
	char name[20];
	char sex;
};
