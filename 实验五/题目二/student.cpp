#include <iostream>//student.cpp
#include"student.h"            //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    std::cout << "num��" << num << std::endl;
    std::cout << "name��" << name << std::endl;
    std::cout << "sex��" << sex << std::endl;
}
void Student::set_value()
{
    std::cin >> num >> name >> sex;
}