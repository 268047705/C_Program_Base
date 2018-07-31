#include"List.h"

List::List(int size)
{
	m_iSize = size;
	m_pList = new int[m_iSize];
	m_iLength = 0;
}

List::~List()
{
	delete[] m_pList;
	m_pList = NULL;
}

void List::ClearList()
{
	m_iLength = 0;
}

bool List::ListEmpty()
{
	return 0 == m_iLength ? true : false;
}

int List::ListLength()
{
	return m_iLength;
}

bool List::GetElem(int i, int *e)//������
{
	if (i < 0 || i >= m_iSize)
	{
		return false;
	}
	else {
		*e = m_pList[i];
		return true;
	}
}

int List::LocateElem(int *e)
{
	for (int i = 0; i < m_iLength; i++)
	{
		if (m_pList[i] == *e)
		{
			return i;
		}
	}
	return -1;
}

bool List::PriorElem(int *currentElem, int *preElem)
{
	int temp = LocateElem(currentElem);
	if (temp == -1)
	{
		return false;
	}
	else {
		if (temp == 0)
		{
			return false;
		}
		else 
		{
			*preElem = m_pList[temp - 1];
			return true;
		}
	}
}

bool List::NextElem(int *currentElem, int *nextElem)
{
	int temp = LocateElem(currentElem);
	if (temp == -1)
	{
		return false;
	}
	else {
		if (temp == m_iLength-1)
		{
			return false;
		}
		else
		{
			*nextElem = m_pList[temp + 1];
			return true;
		}
	}
}

void List::ListTraverse()
{
	for (int i = 0; i < m_iLength; i++)
	{
		cout << m_pList[i] << endl;
	}
}

bool List::ListInsert(int i, int *Elem)
{
	if (i<0 || i>m_iLength)
	{
		return false;
	}
	else
	{
		//���ں�������ƶ�
		for (int k = m_iLength - 1; k >= i; k--)
		{
			m_pList[k + 1] = m_pList[k];
		}
		//����Ԫ��
		m_pList[i] = *Elem;
		m_iLength++;
		return true;
	}
}

bool List::ListDelete(int i, int *Elem)
{
	if (i<0 || i>=m_iLength)
	{
		return false;
	}
	else
	{
		*Elem = m_pList[i];
		//����ǰ������ƶ����Ӻ��濪ʼ�ƶ������ֵ�����
		//k=i+1��Ӧ��k-1,��k=i,k <= m_iLength-1,m_pList[k] = m_pList[k+1];
		for (int k = i+1; k <= m_iLength; k++)
		{
			m_pList[k-1] = m_pList[k];
		}

		m_iLength--;
		return true;
	}
}