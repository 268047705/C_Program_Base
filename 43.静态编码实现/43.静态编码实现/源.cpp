#include"Tank.h"
#include<iostream>
using namespace std;
int main(void)
{
	Tank *p = new Tank('A');
	//��̬���ݳ�Աʼ�մ���
	//�Ǿ�̬��Ա�������Է��ʵ��þ�̬
	//��̬��Ա�������Է��ʵ��þ�̬����̬��Ա�������ܷ��ʵ��÷Ǿ�̬
	cout<<Tank::getCount()<<endl;
	Tank *q = new Tank('B');
	cout << q->getCount() << endl;
	delete p;
	delete q;
	system("pause");
	return 0;
}