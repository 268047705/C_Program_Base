#pragma once
#ifndef PERSON_H
#define PERSON_H
//����д����˵���Խ���ض������
#include<string>
using namespace std;
class Person
{
public:
	Person(string color="blue");
	virtual~Person();
	void printColor();
protected:
	string m_strColor;
};


#endif // !1