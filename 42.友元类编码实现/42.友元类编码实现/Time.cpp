#include"Time.h"
Time::Time(int hour,int min,int second)
{
	m_iHour = hour;
	m_iMinute = min;
	m_iSecond = second;
}

void Time::printTime() 
{
	cout << m_iHour << "ʱ" << m_iMinute << "��" << m_iSecond << "��" << endl;
}