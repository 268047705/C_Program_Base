#include<iostream>
#include<stdlib.h>
#include"Infantry.h"
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
	//Soldier soldier;
	//Person *person = new Soldier;
	//person->play();
	//delete person;//������ڴ��޷��ͷ�
	////ͷ�ļ����ุ����������ǰ���Ϲؼ���virtual��������ڴ��޷��ͷ�
	//person = NULL;

	Person p;
	Soldier s;
	test1(p);
	test1(s);
	system("pause");
	return 0;
}