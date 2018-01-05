#pragma once

#include<iostream>
#include "RangeSensor.h"
class SonarSensor:public RangeSensor
{
private:
	float ranges[16];
	float min;
	float max;
public:
	SonarSensor();
	~SonarSensor();
	float getRange(int index);
	void setRange(float range[]);
	float getMax();
	float getMin();
	void updateSensor(float range[]);
	float operator[](int i);

};