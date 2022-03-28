#include<iostream>
using namespace std;
//设计一个学生类，属性有姓名和学号
//可以给姓名和学好赋值，可以显示学生的姓名和学号

//设计学生类
class Student
{
public://公共权限
	//属性
	string m_Name;
	int m_ID;
	//行为
	//显示姓名和学号
	void showStudent()
	{
		cout << "姓名" << m_Name << "学号" << m_ID << endl;

	}
};


int main() {
	//创建一个具体的学生 实例化对象
	Student s1;
	Student s2;
	//给s1对象进行属性的赋值操作
	s1.m_Name = "Lucy";
	s1.m_ID = 000;
	s2.m_Name = "Kelly";
	s2.m_ID = 001;


	s1.showStudent();
	s2.showStudent();




	system("pause");

	return 0;
}