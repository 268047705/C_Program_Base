#include<stdlib.h>
#include<iostream>
using namespace std;
//�����������Խ���������ֱ���滻������λ�ã����Ӵ�������Ч��
inline void fun(int i=30,int x = 10, int j = 20);
void fun(double i, double j);
int main()
{
	//����Ĭ��ֵ
	fun();
	fun(100);
	fun(100,200);
	fun(100, 200, 300);
	//��������
	fun(1.1, 1.2);
	system("pause");
	return 0;
}

void fun(int i, int j, int k)
{
	cout << i << "," << j << "," << k << endl;
}

void fun(double i, double j)
{
	cout << i << "," << j << endl;
}