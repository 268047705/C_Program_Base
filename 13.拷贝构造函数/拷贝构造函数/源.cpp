#include<iostream>
#include<stdlib.h>

#include<string>
#include "Teacher.h"
using namespace std;


void test(Teacher t)
{

}

//�������캯��ֻ�п����ʹ��ݲ����Ż����
int main()
{
	Teacher t1;
	Teacher t2 = t1;
	Teacher t3(t1);
	Teacher t4;
	test(t4);
	cout << t1.getName() << " " << t1.getAge() << " " << endl;
	system("pause");
	return 0;
}