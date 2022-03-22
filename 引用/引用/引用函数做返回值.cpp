#include<iostream>
using namespace std;
//引用做函数的返回值
	//不要用返回局部变量的引用
//void test01()
//{
	//int a = 10;//局部变量存放在四区的栈区
	//return a;

//}

	//函数的调用可以作为左值
int& test02()
{
	static int a = 10;//静态变量，存放于全局区
	return a;

}
int main() {
	
	//int &ref = test01();
	
	//cout << "ref=" << ref << endl;//第一次结果正确，因为编译器做了保留，第二次输出错误，因为A内存以释放
	//cout << "ref=" << ref << endl;

	int& ref2 = test02();

	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;

	test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
	cout << "ref2=" << ref2 << endl;

	system("pause");

	return 0;
}