#pragma once
#ifndef  FLYABLE_H
#define FLYABLE_H
//�ӿ��಻����ʵ����
//�ӿ��࣬�����д��麯��
//����Ҫ����������ʵ�ַ���
//����.cpp
class Flyable {
public:
	virtual void takeoff() = 0;
	virtual void land() = 0;
};

#endif // ! FLYABLE_H
