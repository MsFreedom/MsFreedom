#include<iostream>
using namespace std;

//����������Ҫ��������ͬһ����������
void func()
{
	cout << "func �ĵ��ã�" << endl;
}
void func(int a)
{
	cout << "func (int a) �ĵ��ã�" << endl;
}
void func(double a)
{
	cout << "func (double a)�ĵ��ã�" << endl;
}
void func(int a, double b)
{
	cout << "func (int a ,double b) �ĵ��ã�" << endl;
}
void func(double a, int b)
{
	cout << "func (double a ,int b)�ĵ��ã�" << endl;
}

//��������ֵ��������Ϊ������������
//int func(double a, int b)
//{
//	cout << "func (double a ,int b)�ĵ��ã�" << endl;
//}


int main() {

	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 10);

	system("pause");

	return 0;
}