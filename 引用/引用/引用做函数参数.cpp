#include<iostream>
using namespace std;
//��������
//1,ֵ����
//void mySwap01(int a, int b)
//{
	//int temp = a;
	//a = b;
	//b = temp;
//}
//2����ַ����
void mySwap02(int*a,int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3�����ô���


int main() {
	//ֵ����
	int a = 10;
	int b = 20;

	//mySwap01(a, b);//ֵ���ݣ��ββ����������ʵ��
	mySwap02(&a, &b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;



	system("pause");

	return 0;
}