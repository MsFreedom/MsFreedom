#include<iostream>
using namespace std;

//��������ע������
//1��������Ϊ��������

void func(int& a)
{
	cout << "func (int &a) ���� " << endl;
}

void func(const int& a)
{
	cout << "func (const int &a) ���� " << endl;
}


//2������������������Ĭ�ϲ���

void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10) ����" << endl;
}

void func2(int a)
{
	cout << "func2(int a) ����" << endl;
}

int main() {
	
	
	int a = 10;
	func(a); //������const
	func(10);//������const


	//func2(10); //����Ĭ�ϲ����������壬��Ҫ����


	system("pause");

	return 0;
}