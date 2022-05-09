#include<iostream>
using namespace std;


void myPrint(int a, int b)
{
	cout << "调用的普通函数" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "调用的模板" << endl;
}

template<class T>
void myPrint(T a, T b , T c)
{
	cout << "调用重载的模板" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;

	//myPrint(a, b);


	//通过空模板参数列表，强制调用函数模板
	//myPrint<>(a, b);

	//myPrint(a, b, 100);

	//如果函数模板产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';

	myPrint(c1, c2);
}

int main() {

	test01();

	system("pause");

	return 0;
}