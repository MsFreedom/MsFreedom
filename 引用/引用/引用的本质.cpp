#include<iostream>
using namespace std;
void func(int& ref) {
	ref = 100;//ref�����ã�ת��Ϊ*ref=100

}

int main() {
	int a = 10;
	//�Զ�ת��Ϊint* const ref=&a;ָ�볣����ָ�뷽�򲻿ɸģ�Ҳ˵��Ϊʲô���ò����Ը���
	int& ref = a;
	ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref=20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);
	return 0;

	system("pause");

	return 0;
}