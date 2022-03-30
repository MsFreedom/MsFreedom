#include<iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& out, Person& p);

public:

	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}

	//��Ա���� ʵ�ֲ���  p << cout ����������Ҫ��Ч��
	//void operator<<(Person& p){
	//}

private:
	int m_A;
	int m_B;
};

//ȫ�ֺ���ʵ����������
//ostream����ֻ����һ��
ostream& operator<<(ostream& out, Person& p) {
	out << "a:" << p.m_A << " b:" << p.m_B;
	return out;
}

void test() {

	Person p1(10, 20);

	cout << p1 << "hello world" << endl; //��ʽ���
}

int main() {

	test();


	system("pause");

	return 0;
}