#include<iostream>
using namespace std;

class Person
{
public:

	Person(int age)
	{
		//1�����βκͳ�Ա����ͬ��ʱ������thisָ��������
		this->age = age;
	}

	Person& PersonAddPerson(Person p)
	{
		this->age += p.age;
		//���ض�����
		return *this;
	}

	int age;
};

void test01()
{
	Person p1(10);
	cout << "p1.age = " << p1.age << endl;

	Person p2(10);
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
	cout << "p2.age = " << p2.age << endl;
}


int main() {

	test01();


	system("pause");

	return 0;
}