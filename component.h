#pragma once
using namespace std;
class component
{
public:
	int timing;
	component()
	{

	}
	component(int _timing)
	{
		timing = _timing;
	}
	virtual void print() = 0;//����������� ������� ������ �� �������
	virtual void period() = 0;//����������� ������� �������
};