#include<iostream>
using namespace std;

class Person {
public:
	//�޲Σ�Ĭ�ϣ����캯��
	Person() {
		cout << "�޲ι��캯��!" << endl;
	}
	//�вι��캯��
	Person(int a) {
		age = a;
		cout << "�вι��캯��!" << endl;
	}
	//�������캯��
	Person(const Person& p) {
		age = p.age;
		cout << "�������캯��!" << endl;
	}
	//��������
	~Person() {
		cout << "��������!" << endl;
	}
public:
	int age;
};

void test01()
{
	Person p1(18);
	//�����д�������죬���������Զ���ӿ������죬������ǳ��������
	Person p2(p1);

	cout << "p2������Ϊ�� " << p2.age << endl;
}

void test02()
{
	//����û��ṩ�вι��죬�����������ṩĬ�Ϲ��죬���ṩ��������
	Person p1; //��ʱ����û��Լ�û���ṩĬ�Ϲ��죬�����
	Person p2(10); //�û��ṩ���в�
	Person p3(p2); //��ʱ����û�û���ṩ�������죬���������ṩ

	//����û��ṩ�������죬�����������ṩ�������캯��
	Person p4; //��ʱ����û��Լ�û���ṩĬ�Ϲ��죬�����
	Person p5(10); //��ʱ����û��Լ�û���ṩ�вΣ������
	Person p6(p5); //�û��Լ��ṩ��������
}

int main() {

	test01();


	system("pause");

	return 0;
}