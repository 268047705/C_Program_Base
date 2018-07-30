#pragma once
#ifndef MYSTACK_H
#define MYSTACK_H

#include<iostream>
using namespace std;

class MyStack 
{
public:
	MyStack(int size);//�����ڴ��ʼ��ջ�ռ䣬�趨ջ������ջ��
	~MyStack();//����ջ�ռ��ڴ�
	bool stackEmpty();//�ж�ջ�Ƿ�Ϊ��
	bool stackFull();//�ж�ջ�Ƿ�Ϊ��
	void clearStack();//���ջ
	int stackLength();//����Ԫ�صĸ���
	bool push(char elem);//Ԫ����ջ��ջ������
	bool pop(char &elem);//Ԫ����ջ��ջ���½�
	void stackTraverse(bool isAsc);//����ջ������Ԫ��
private:
	char *m_pBuffer;//ջ�ռ�ָ��
	int m_iSize;//ջ����
	int m_iTop;//ջ����ջ��Ԫ�ظ���
};

#endif // !MYSTACK_H
