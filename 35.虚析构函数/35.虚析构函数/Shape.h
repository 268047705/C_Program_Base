#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape
{
public:
	Shape();
	virtual ~Shape();//ֻҪ��Shape�����������ǰ����virtual�ؼ���ʹ���Ϊ����������
	virtual double calcArea();
};

#endif SHAPE_H