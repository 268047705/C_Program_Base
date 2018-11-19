#include<stdlib.h>
#include<iostream>
using namespace std;

int seqSearch(int *array, int low, int high, int key);
int binarySearch(int *array, int low, int high, int key);
int interpolationSearch(int *array, int low, int high, int key);

int main(void)
{
	int * array = new int[100];
	int low = 1;
	int high = 7;
	array[1] = 4;
	array[2] = 8;
	array[3] = 9;
	array[4] = 10;
	array[5] = 11;
	array[6] = 13;
	array[7] = 19;
	int seqResult = seqSearch(array,low,high,4);
	cout << "˳����ҽ���ǣ�" << seqResult << endl;
	int binaryResult = binarySearch(array, low, high,8);
	cout << "�۰���ҽ���ǣ�" << binaryResult << endl;
	int interpolationResult = interpolationSearch(array, low, high, 13);
	cout << "��ֵ���ҽ���ǣ�" << interpolationResult << endl;

	delete array;
	system("pause");
	return 0;
}

//˳�����
int seqSearch(int *array, int low, int high, int key)
{
	for (int i = low; i < high; i++)
	{
		if (array[i] == key)
			return i;
	}
	return -1;
}

//�۰����(ֻ�������Ѿ�����õ�)
int binarySearch(int *array, int low, int high, int key)
{
	while (low <= high)
	{
		//���м仮��
		//mid���������������ֱ������ȡ��������Ӱ����ҽ��
		int mid = (low + high) / 2;
		//�������м������
		if (key == array[mid])
			return mid;
		//�����м���������ں�벿������һ����С��Χ
		else if (key > array[mid])
			low = mid + 1;
		//�����м����С������ǰ�벿������һ����С��Χ
		else
			high = mid - 1;
	}
	return -1;
}

//��ֵ����(ֻ�������Ѿ�����õ�)
//���۰�����߼�һ�£��޸���midֵ
int interpolationSearch(int *array, int low, int high, int key)
{
	while (low <= high)
	{
		//�Ż��м�ֵ
		int mid = low+(key-array[low])/(array[high]-array[low])*(high - low-1);
		//�������м������
		if (key == array[mid])
			return mid;
		//�����м�����������°벿������һ����С��Χ
		else if (key > array[mid])
			low = mid + 1;
		//�����м����С�������ϰ벿������һ����С��Χ
		else
			high = mid - 1;
	}
	return -1;
}