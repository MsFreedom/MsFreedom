#include<iostream>
using namespace std;
int * func()//����new�ؼ��� ���Խ����ݿ��ٵ�����
{
	int *p = new int(10);
	return p;

}
int main() {
	//�ڶ�����������
	int *p = func();
	cout << *p << endl;


	system("pause");

	return 0;
}