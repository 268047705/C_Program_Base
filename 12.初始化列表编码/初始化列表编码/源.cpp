#include<iostream>
#include<stdlib.h>

#include<string>
#include "Teacher.h"
using namespace std;




//��ʼ���б���Խ���޷��Գ������г�ʼ������
int main()
{
	Teacher t1;
	cout << t1.getName() << " " << t1.getAge() << " " <<t1.getMax()<< endl;
	system("pause");
	return 0;
}