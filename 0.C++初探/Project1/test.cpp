#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	cout << "Hello imooc" << endl;  //�ڴ���д���ǵĿ�ƪHello imooc
	int x = 0;
	cout << "������һ������" << endl;
	cin >> x;
	cout << oct << x << endl;//8

	cout << dec << x << endl;//10

	cout << hex << x << endl;//16

	cout << "������һ������ֵ��0����1"<<endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl;
	system("pause");
	return 0;
}