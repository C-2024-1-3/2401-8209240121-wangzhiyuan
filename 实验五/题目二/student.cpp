#include <iostream>//student.cpp
#include"student.h"            //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    std::cout << "num：" << num << std::endl;
    std::cout << "name：" << name << std::endl;
    std::cout << "sex：" << sex << std::endl;
}
void Student::set_value()
{
    std::cin >> num >> name >> sex;
}