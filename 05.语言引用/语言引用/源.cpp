#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct
{
	int x;
	int y;
}Coor;

int main()
{
	int a = 10;
	int &b = a;//����&�������ַ���Ǹ�����a�����Ϊb�������������
	b = 10;
	cout << b << endl;

	Coor c1;
	Coor &c = c1;
	c.x = 10;
	c.y = 20;
	cout << c1.x << c1.y << endl;
	system("pause");
	return 0;
}