#include<iostream>
using namespace std;

class MyInteger {

	friend ostream& operator<<(ostream& out, MyInteger myint);

public:
	MyInteger() {
		m_Num = 0;
	}
	//ǰ��++
	MyInteger& operator++() {
		//��++
		m_Num++;
		//�ٷ���
		return *this;
	}

	//����++
	MyInteger operator++(int) {
		//�ȷ���
		MyInteger temp = *this; //��¼��ǰ�����ֵ��Ȼ���ñ����ֵ��1�����Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++��
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};


ostream& operator<<(ostream& out, MyInteger myint) {
	out << myint.m_Num;
	return out;
}


//ǰ��++ ��++ �ٷ���
void test01() {
	MyInteger myInt;
	cout << ++myInt << endl;
	cout << myInt << endl;
}

//����++ �ȷ��� ��++
void test02() {

	MyInteger myInt;
	cout << myInt++ << endl;
	cout << myInt << endl;
}

int main() {
	test01();
	//test02();


	system("pause");

	return 0;
}