#include<iostream>
using namespace std;
class C1
{
	int  m_A; //Ĭ����˽��Ȩ��
};

struct C2
{
	int m_A;  //Ĭ���ǹ���Ȩ��
};
int main() {
	
	
	//C1 c1;
	//c1.m_A = 10; //���󣬷���Ȩ����˽��

	C2 c2;
	c2.m_A = 10; //��ȷ������Ȩ���ǹ���




	system("pause");

	return 0;
}