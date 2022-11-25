#pragma once
#include "component.h"
class wall : public component
{
public:
	wall()
	{

	}
	wall(int time) : component(time) {};
	virtual void print()
	{
		cout << "�����" << endl;
	}
	virtual void period()
	{
		cout << "�����=" << wall_time << " �." << endl;
		cout << "����=" << wall_price << " �." << endl;
	}
protected:
	double height = 2.7;
	int width = 4, wall_time = 3, wall_price = 7000;
};