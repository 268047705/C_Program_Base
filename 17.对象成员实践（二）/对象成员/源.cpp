#include<iostream>
#include<stdlib.h>
#include<string>
#include "Line.h"

int main(void)
{
	Line *p = new Line(1, 2, 3, 4);
	delete p;
	p = NULL;

//	����A--����B--�����߶Ρ��������߶Ρ�������B��������A
//
//	�����������һ��Ĭ�Ϲ��캯������ô�߶�����ʵ������ʱ����Բ�ʹ�ó�ʼ���б����������Ĺ��캯���в�������ô�߶�����ʵ������ʱ��ͱ���ʹ�ó�ʼ���б�
	system("pause");
	return 0;
}