#include"Shape.h"
#include"Circle.h"
#include"Rect.h"

int main(void)
{
	//���캯��ǰ�����Լ�virtual
	//ȫ�ֺ��������Լ�virtual
	//��̬��Ա���������Լ�virtual��virtual���ܺ�static����
	//�����������Ƽ���virtual�����inline���Ե�
	Shape *shape1 = new Rect(1,3);
	Shape *shape2 = new Circle(8);
	//ֻҪ��Shape�����������ǰ����virtual�ؼ���ʹ���Ϊ����������
	//������������������Ҳ���������������������������������Ҳ����virtual�ؼ���

	//�麯������ʹ������������������������ֹ�ڴ�й¶
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	system("pause");
	return 0;
}