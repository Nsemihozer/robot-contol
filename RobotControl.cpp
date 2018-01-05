#include "RobotControl.h"
#include <iostream>
using namespace std;
RobotControl::RobotControl(Position * pos, RobotInterface * rob, RangeSensor * sens)
{	
	position = pos;
	sensor.push_back(sens);
	robotinterface = rob;
	robotinterface->setPosition(position);
	robotinterface->setSensor(sensor[0]);
	robotinterface->update();
}
RobotControl::~RobotControl()
{

}
bool RobotControl::connect()
{
	if (robotinterface->open())
	{
		robotinterface->update();
		return true;
	}
	else
	{
		return false;
	}


}
void RobotControl::safeMove(int speed)
{
	while(sensor[0]->getRange(3) > 500 && sensor[0]->getRange(4) > 500)
	{
		robotinterface->update();
		robotinterface->move(speed);
		print();
	}
	robotinterface->stop();
	
}
void RobotControl::turnLeft()
{
	robotinterface->turn(RobotInterface::left);
}
void RobotControl::turnRight()
{
	robotinterface->turn(RobotInterface::right);
}
void RobotControl::forward()
{
	robotinterface->turn(RobotInterface::forward);
}
void RobotControl::print()
{
	cout << "MyPose is (" << position->getX() << "," << position->getY() << "," << position->getTh() << ")" << endl;
	cout << "Sonar ranges are [ ";
	for (int i = 0; i < 16; i++) 
	{
		cout << sensor[0]->getRange(i) << " ";
	}
	cout << "]" << endl;	
	cout << "Min: " << sensor[0]->getMin() << ", Max: " << sensor[0]->getMax() << endl;
}
void RobotControl::moveDistance(float distance)
{

	robotinterface->move(100);
	
	
}
void RobotControl::closeWall()
{
	for (int i = 0; i < 16; i++)
	{
		if (sensor[i]->getRange(i) < 10)
		{
			robotinterface->stop();
		}	
	}	
}
