#include<iostream>
#include<stdlib.h>
#include"MigrantWorker.h"
using namespace std;
//�������ʱ���������Ե���������
void test1(Person p)
{
	p.play();
}

//���������ʱ���������������������������ÿ�����������
void test2(Person &p)
{
	p.play();
}
//���������ʱ����
void test3(Person *p)
{
	p->play();
}

int main(void)
{
	//���ؼ̳���ָ��C�̳�B��B�̳�A
	//��̳���ָ��A�̳�B��C
	MigrantWorker *m = new MigrantWorker("001","Kroos");
	m->carry();
	m->sow();
	delete m;
	m = NULL;
	system("pause");
	return 0;
}