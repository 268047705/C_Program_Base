#include<iostream>
#include<stdlib.h>

#include<string>
#include "Teacher.h"
using namespace std;



//�������캯��ֻ�п����ʹ��ݲ����Ż����
int main()
{
	Teacher t1;
	Teacher *p = new Teacher();
	delete p;
	system("pause");
	return 0;
}