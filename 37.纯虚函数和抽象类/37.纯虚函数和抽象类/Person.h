#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;
//�����಻����ʵ����
//�������麯������Ϊ������
class Person
{
public:
	Person(string name);
	virtual~Person();
	virtual void work()=0;//�麯��ֵΪ0�����麯��
protected:
	string m_strName;
};
#endif PERSON_H