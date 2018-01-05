#pragma once
#include "RobotInterface.h"
#include "Position.h"
#include "RangeSensor.h"
#include <vector>
class RobotControl
{
	vector <RangeSensor*> sensor;
	Position * position;
	RobotInterface *robotinterface;
public:
	RobotControl(Position * pos, RobotInterface *rob,RangeSensor *sens);
	~RobotControl();
	bool connect();
	void safeMove(int speed);
	void turnLeft();
	void turnRight();
	void forward();
	void print();
	void moveDistance(float distance);
	void closeWall();
};

