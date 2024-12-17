#include <iostream>//main.cpp
#include"student.h"
int main()
{
	Student stud;                //定义对象
	stud.set_value();
	/*Student stud1(007, "tcg", 'm');*/
	stud.display();              //执行stud对象的display函数
	return 0;
}

