#include<iostream>
using namespace std;

class Person {
public:

	//�������ÿɶ���д
	void setName(string name) {
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}


	//��ȡ���� 
	int getAge() {
		return m_Age;
	}
	//��������
	void setAge(int age) {
		if (age < 0 || age > 150) {
			cout << "���������!" << endl;
			return;
		}
		m_Age = age;
	}

	//��������Ϊֻд
	void setLover(string lover) {
		m_Lover = lover;
	}

private:
	string m_Name; //�ɶ���д  ����

	int m_Age; //ֻ��  ����

	string m_Lover; //ֻд  ����
};


int main() {

	Person p;
	//��������
	p.setName("����");
	cout << "������ " << p.getName() << endl;

	//��������
	p.setAge(50);
	cout << "���䣺 " << p.getAge() << endl;

	//��������
	p.setLover("�Ծ�");
	//cout << "���ˣ� " << p.m_Lover << endl;  //ֻд���ԣ������Զ�ȡ



	system("pause");

	return 0;
}