#include<iostream>
using namespace std;

#include <fstream>
#include <string>

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}

	Person p;
	ifs.read((char*)&p, sizeof(p));

	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
}

int main() {

	test01();


	system("pause");

	return 0;
}