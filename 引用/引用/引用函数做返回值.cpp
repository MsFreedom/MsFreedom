#include<iostream>
using namespace std;
//�����������ķ���ֵ
	//��Ҫ�÷��ؾֲ�����������
//void test01()
//{
	//int a = 10;//�ֲ����������������ջ��
	//return a;

//}

	//�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10;//��̬�����������ȫ����
	return a;

}
int main() {
	
	//int &ref = test01();
	
	//cout << "ref=" << ref << endl;//��һ�ν����ȷ����Ϊ���������˱������ڶ������������ΪA�ڴ����ͷ�
	//cout << "ref=" << ref << endl;

	int& ref2 = test02();

	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;

	test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
	cout << "ref2=" << ref2 << endl;

	system("pause");

	return 0;
}