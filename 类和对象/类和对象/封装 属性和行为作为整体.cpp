#include<iostream>
using namespace std;
//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ���ʽ��2*PI*�뾶
const double PI = 3.141592654; //�趨Բ����

//class �������һ���࣬���������ľ����������
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:

	//����
	int m_r;

	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;

	}
};


int main() {

	//ͨ��Բ�࣬���������Բ������
	Circle c1;
	//��Բ�Ķ�������Խ��и�ֵ
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ" << c1.calculateZC() << endl;







	system("pause");

	return 0;
}