#pragma once
#ifndef  COORDINATE_H
#define COORDINATE_H
#include<iostream>
using namespace std;
class Coordinate
{
	//��Ԫ�������������
	friend Coordinate &operator-(Coordinate &c);
public:
	Coordinate(int x, int y);
	//Coordinate &operator-();
	Coordinate &operator++();//ǰ��++���������
	Coordinate operator++(int);//����++���������
	int getX();
	int getY();

public:
	int m_iX;
	int m_iY;
};
#endif // ! COORDINATE_H
