#include<iostream>
using namespace std;

class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	//��������
	~Person()
	{
		cout << "Person��������������" << endl;
	}

};

void test01()
{
	Person p;
}

int main() {

	test01();



	system("pause");

	return 0;
}