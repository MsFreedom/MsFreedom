#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base���캯��!" << endl;
	}
	~Base()
	{
		cout << "Base��������!" << endl;
	}
};

class Son : public Base
{
public:
	Son()
	{
		cout << "Son���캯��!" << endl;
	}
	~Son()
	{
		cout << "Son��������!" << endl;
	}

};


void test01()
{
	//�̳��� �ȵ��ø��๹�캯�����ٵ������๹�캯��������˳���빹���෴
	Son s;
}

int main() {

	test01();


	system("pause");

	return 0;
}