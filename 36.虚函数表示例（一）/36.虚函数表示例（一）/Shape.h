#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape
{
public:
	Shape();
   //~Shape();
    //double calcArea();
	virtual ~Shape();//��������������Ҳ����ʵ���������麯����ָ�룬ռ��4���ڴ浥Ԫ
	virtual double calcArea();//�麯������ʵ���������麯����ָ�룬ռ��4���ڴ浥Ԫ
};

#endif SHAPE_H