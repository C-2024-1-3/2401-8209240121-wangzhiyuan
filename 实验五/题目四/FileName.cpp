#include<iostream>
class Student
{
public:
	int no, grade;
	Student(int no, int grade)
	{
		this->no = no;
		this->grade = grade;
	}
};
void max(Student* student[])
{
	int maxno = student[0]->no;
	for (int i = 1; i < 5; i++)
	{
		if (student[i - 1]->grade < student[i]->grade)
		{
			maxno = student[i]->no;
		}
	}
	std::cout << "·Ö×î¸ß:" << maxno;
}
int main()
{
	Student student0(0, 95);
	Student student1(1,97);
	Student student2(2,95);
	Student student3(3,98);
	Student student4(4,96);
	Student*student[5];
	student[0] = &student0;
	student[1] = &student1;
	student[2] = &student2;
	student[3] = &student3;
	student[4] = &student4;
	max(student);
}