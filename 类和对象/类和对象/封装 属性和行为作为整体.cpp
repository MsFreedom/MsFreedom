#include<iostream>
using namespace std;
//设计一个圆类，求圆的周长
//圆的周长公式：2*PI*半径
const double PI = 3.141592654; //设定圆周率

//class 代表设计一个类，类后面紧跟的就是类的名称
class Circle
{
	//访问权限
	//公共权限
public:

	//属性
	int m_r;

	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;

	}
};


int main() {

	//通过圆类，创建具体的圆（对象）
	Circle c1;
	//给圆的对象的属性进行赋值
	c1.m_r = 10;
	cout << "圆的周长为" << c1.calculateZC() << endl;







	system("pause");

	return 0;
}