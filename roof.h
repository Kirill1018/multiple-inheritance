#pragma once
#include "component.h"
class roof : public component
{
public:
	roof()
	{

	}
	roof(int time) : component(time) {};
	virtual void print()
	{
		cout << "�����" << endl;
	}
	virtual void period()
	{
		cout << "�����=" << roof_time << " �." << endl;
		cout << "����=" << roof_price << " �." << endl;
	}
protected:
	int roof_length = 4, roof_width = 2, roof_time = 2, roof_price = 2000;
};