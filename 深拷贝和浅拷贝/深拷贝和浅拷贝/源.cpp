#include<iostream>
#include<stdlib.h>
#include"Array.h"
using namespace std;
int main(void)
{
	//ǳ������ָ
	//ֱ�ӽ�ֵ������ȥ
	Array arr1(5);;
	Array arr2(arr1);
	arr1.printAddr();
	arr2.printAddr();
	arr1.printArr();
	arr2.printArr();
	//cout <<"arr2.getCount()"<< arr2.getCount()<<endl;
	system("pause");
	return 0;
}