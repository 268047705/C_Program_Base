#include"Shape.h"
#include"Circle.h"
#include"Rect.h"

int main(void)
{
	Shape shape;
	//û�����ݳ�Ա��ֻռ1���ڴ浥Ԫ����ʵ����
	cout << sizeof(shape)<<endl;

	int *p = (int*)&shape;
	//cout << p<<endl;
	cout << *p << endl;
	Circle circle(100);
	//��int���ݳ�Ա��ռ4���ڴ浥Ԫ
	cout << sizeof(circle)<<endl;

	int *q = (int*)&circle;
	//cout << q << endl;
	//cout << *q << endl;
	q++;//̓������ָᘕ��ד�ǰ�Ă��ȴ��Ԫ������Ҫ++�������ҵ�100
	cout << *q << endl;
	system("pause");
	return 0;
}