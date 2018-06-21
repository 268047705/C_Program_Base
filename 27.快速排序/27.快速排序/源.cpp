#include <iostream>
using namespace std;

//exchange the 2 items a and b
void swap(int &a, int &b)
{
	if (a == b)
		return;
	a = a + b;
	b = a - b;
	a = a - b;
}

//ergodic the buf and print it
void print(int  *p, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << p[i] << " ";
	}
}

/*
quitSort
*/

int getPartion(int *array, int low, int high)
{
	int key = array[low];
	while (low < high)
	{
		while (low < high && key <= array[high]) //���array[high]���ڼ�ֵ����ô����Ӧ���ڼ�ֵ�ұ�
			high--;  //��˽�high�±���ǰ�ƶ���ֱ���ҵ��ȼ�ֵС��ֵ����ʱ����������ֵ
		swap(array[low], array[high]);

		while (low < high && key >= array[low])
			low++;
		swap(array[low], array[high]);
	}
	return low;//����keyֵ���±�
}



void QuitSort(int *buf, int low, int high)
{
	if (low < high)
	{
		int key = getPartion(buf, low, high);

		QuitSort(buf, low, key - 1);
		QuitSort(buf, key + 1, high);
	}
}

int main(int argc, char *args[])
{
	int buf[10] = { 12, 4, 34, 6, 8, 65, 3, 2, 988, 45 };
	int m = sizeof(buf);
	cout << "����ǰ:" << endl;
	print(buf, sizeof(buf) / sizeof(int));

	QuitSort(buf, 0, sizeof(buf) / sizeof(int) - 1);

	cout << "\n\n\n�����" << endl;
	print(buf, sizeof(buf) / sizeof(int));
	getchar();
}