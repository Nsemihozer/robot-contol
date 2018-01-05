#pragma once
#include "RobotInterface.h"
#include "PioneerRobotAPI.h"
class PioneerRobotInterface :public RobotInterface, public PioneerRobotAPI
{
public:
	PioneerRobotInterface();
	~PioneerRobotInterface();
	 void update() ;
	 bool open() ;
	 bool close();
	 void move(float speed) ;
	 void turn(RobotInterface::DIRECTION);

	 void stop() ;
	 void updateRobot();
};

