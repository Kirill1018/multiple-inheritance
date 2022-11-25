#pragma once
#include "component.h"
class window : public component
{
public:
	window()
	{

	}
	window(int time) : component(time) {};
	virtual void print()
	{
		cout << "����" << endl;
	}
	virtual void period()
	{
		cout << "�����=" << wind_time << " �." << endl;
		cout << "����=" << wind_price << " �." << endl;
	}
protected:
	int wind_height = 1, wind_width = 1, wind_time = 9, wind_price = 3000;
};