#include <stdlib.h>
#include <iostream>
using namespace std;
void fun(const int &a, const int &b);
int main(void)
{
	int x = 3;
	int y = 5;
	int *const p = &x;//p��������ָ�������ĵ�ַ
	*p = 10;
	cout << x << endl;

	int const* d = &x;//*d�����޸�ֵ
	d = &y;
	cout << *d << endl;

	int const &z = x;

	system("pause");
	return 0;
}

void fun(const int &a, const int &b)
{
	//a = 10;�����ԶԲ��������޸�
	//b = 20;
}