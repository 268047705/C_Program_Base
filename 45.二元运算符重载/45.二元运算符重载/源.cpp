#include<iostream>
using namespace std;
#include "Coordinate.h"
//�����������������Ԫ�������ء�
//��Ϊ��Ԫ�����ĵ�һ������������thisָ��Ҳ������������ֵ��
//��������������봫��thisָ�롣


//<< ����������ز������ó�Ա�������ء�
//��Ϊ��Ա�������أ�ostream���͵�outputռ��������ߵ�λ�ã�����Ĳ���һ�����ұ�
//�����޷���õ�ǰָ�룬coor.operator<<()���coor���ڵ�ǰָ���ȡ������ʧ�ܡ�
//operator<<(output,coor)�����ſ�����

int main(void)
{
	Coordinate coor1(1, 3);
	Coordinate coor2(3, 5);
	Coordinate coor3(0, 0);
	coor3 = coor1 + coor2;
	//cout << coor3.getX()<<","<<coor3.getY() << endl;
	//cout << coor3;//���������������
	cout << coor3[0]<< endl;//����[]����
	cout << coor3[1] << endl;
	system("pause");
	return 0;
}