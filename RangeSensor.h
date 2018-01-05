#pragma once
#include<iostream>
#include<string>

using namespace std;

class RangeSensor
{
public:
	RangeSensor();
	~RangeSensor();
	virtual void updateSensor(float rangers[])=0;
	virtual float getMin()=0;
	virtual float getMax()=0;
	virtual float getRange(int index)=0;
	virtual float operator[](int i)=0;
};
