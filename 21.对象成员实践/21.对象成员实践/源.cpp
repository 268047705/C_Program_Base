#include "Line.h"
#include <iostream>
#include "stdlib.h"
using namespace std;
int main(void)
{
	Line *p = new Line(1,2,3,4);
	delete p;
	p = NULL;


	cout << sizeof(p) << endl;//��һ��ָ�룬32λ���뻷����4�ֽ�
	cout << sizeof(Line) << endl;//Line�ڲ�������ָ�룬32λ���뻷����8�ֽ�
	system("pause");
	return 0;
}