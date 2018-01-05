#pragma once
#include "Position.h"
#include "RangeSensor.h"

using namespace std;
class RobotInterface
{
public:
	enum DIRECTION 
	{
		left = -1,forward = 0,right = 1
	};
	RobotInterface()
	{
	}
	~RobotInterface()
	{
	}
	void setSensor(RangeSensor*);
	void setPosition(Position*);
	virtual void update() = 0;
	virtual bool open() = 0;
	virtual bool close() = 0;
	virtual void move(float) = 0;
	virtual void turn(DIRECTION) = 0;
	virtual void stop() = 0;
protected:
	Position* position;
	RangeSensor* rangeSensor;
};

