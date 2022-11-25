#pragma once
#include "component.h"
class door : public component
{
public:
	door()
	{

	}
	door(int time) : component(time) {};
	virtual void print()
	{
		cout << "�����" << endl;
	}
	virtual void period()
	{
		cout << "�����=" << door_time << " �." << endl;
		cout << "����=" << door_price << "�. " << endl;
	}
protected:
	double door_height = 1.8;
	int door_width = 1, door_time = 6, door_price = 10000;
};