#include<iostream>
using namespace std;

class Building;
class goodGay
{
public:

	goodGay();
	void visit(); //ֻ��visit������ΪBuilding�ĺ����ѣ����Է�����Building��˽������
	void visit2();

private:
	Building* building;
};


class Building
{
	//���߱�����  goodGay���е�visit��Ա���� ��Building�����ѣ����Է���˽������
	friend void goodGay::visit();

public:
	Building();

public:
	string m_SittingRoom; //����
private:
	string m_BedRoom;//����
};

Building::Building()
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

goodGay::goodGay()
{
	building = new Building;
}

void goodGay::visit()
{
	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
	cout << "�û������ڷ���" << building->m_BedRoom << endl;
}

void goodGay::visit2()
{
	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
	//cout << "�û������ڷ���" << building->m_BedRoom << endl;
}

void test01()
{
	goodGay  gg;
	gg.visit();

}

int main() {

	test01();


	system("pause");

	return 0;
}