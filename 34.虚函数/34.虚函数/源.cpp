#include"Shape.h"
#include"Circle.h"
#include"Rect.h"

int main(void)
{
	Shape *shape1 = new Rect(1,3);
	Shape *shape2 = new Circle(8);
	//Ĭ�ϵ��ø����calcArea()��������Ϊ�÷�������δ��д
	//������ͬ������ǰ����virtual�ؼ��֣�����ֱ�ӵ������ຯ�����Ӷ�ʵ�ֶ�̬��̬
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	system("pause");
	return 0;
}