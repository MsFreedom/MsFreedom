#include<iostream>
using namespace std;
//���һ��ѧ���࣬������������ѧ��
//���Ը�������ѧ�ø�ֵ��������ʾѧ����������ѧ��

//���ѧ����
class Student
{
public://����Ȩ��
	//����
	string m_Name;
	int m_ID;
	//��Ϊ
	//��ʾ������ѧ��
	void showStudent()
	{
		cout << "����" << m_Name << "ѧ��" << m_ID << endl;

	}
};


int main() {
	//����һ�������ѧ�� ʵ��������
	Student s1;
	Student s2;
	//��s1����������Եĸ�ֵ����
	s1.m_Name = "Lucy";
	s1.m_ID = 000;
	s2.m_Name = "Kelly";
	s2.m_ID = 001;


	s1.showStudent();
	s2.showStudent();




	system("pause");

	return 0;
}