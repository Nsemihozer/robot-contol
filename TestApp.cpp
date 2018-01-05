#include<iostream>
#include"RobotControl.h"
#include "RobotInterface.h"
#include "Position.h"
#include "PioneerRobotInterface.h"
#include "RangeSensor.h"
#include "SonarSensor.h"
using namespace std;

int main()
{
	float distance;
	SonarSensor sens;
	Position pos;
	RobotInterface* pio = new PioneerRobotInterface;
	RobotControl robot(&pos, pio, &sens);
	
	if (robot.connect())
	{
		cout << "baglandi";
	}
	else
	{
		cout << "no father";
	}
	robot.safeMove(100);
	robot.turnLeft();
	Sleep(5000);
	robot.forward();
	robot.safeMove(100);
	robot.print();
	system("pause");
}