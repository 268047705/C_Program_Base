#include<iostream>
using namespace std;
#include<stdlib.h>
#include<vector>
#include<list>
#include<map>

int main(void)
{
	vector<int> vec;
	vec.push_back(3);//����β������һ��Ԫ��
	vec.push_back(4);
	vec.push_back(5);
	//vec.pop_back();//ɾ�����������һ��Ԫ��
	//cout << vec.size() << endl;

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	cout << "-----------------------�ָ���-------------------" << endl;
	//������
	vector<int>::iterator itor = vec.begin();
	//cout << *itor << endl;
	for (; itor != vec.end(); itor++)
	{
		cout << *itor << endl;
	}
	cout << "-----------------------�ָ���-------------------" << endl;
	cout << vec.front() << endl;//vec����Ԫ��
	cout << vec.back() << endl;//vec.ĩβԪ��
	system("pause");
	return 0;
}