#include "Line.h"
#include<iostream>
int main(void)
{
	//����const�����÷ǳ�����������const���ó�������
	const Line line(1, 2, 3, 4);
	line.printInfo();
	system("pause");
	return 0;
}