#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	cout << "������������֣�" << endl;
	getline(cin, name);
	if (name.empty())
	{
		cout << "��ʱ�����Ϊ��" << endl;
		system("pause");
		return 0;
	}
	if (name == "imooc")
	{
		cout << "���ǹ���Ա"<<endl;
	}
	cout << "hello" + name << endl;
	cout << "���ֳ����ǣ�"<<name.size() << endl;
	cout << "��һ����ĸ��:" << name[0] << endl;
	system("pause");
	return 0;
}