#include<iostream>
#include "Array.h"
using namespace std;
Array::Array(int len)
{
	this->len = len;
	cout << "Array(int len)" << endl;
}

Array::~Array()
{

}
//������setLen�����ã����뽫�䷵��*this��������Ч
//��Array Array::setLen(int len){return *this}
Array *Array::setLen(int len)
{
	this->len = len;
	return this;
}

int Array::getLen()
{
	return len;
}

Array *Array::printInfo()
{
	//cout << "len="<<len << endl;
	cout << this << endl;
	return this;
}