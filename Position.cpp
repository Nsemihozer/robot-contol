#include "Position.h"



Position::Position(float _x, float _y, float _th) 
{	
	x = _x;
	y = _y;
	th = _th;
}
Position::~Position()
{
}
float Position::getX()
{
	return x;
}
void Position::setX(float x)
{
	this->x = x;
}
void Position::setY(float y)
{
	this->y= y;
}
float Position::getY()
{
	return y;
}
void Position::setTh(float th)
{
	this->th = th;
}
float Position::getTh()
{
	return th;
}
bool Position::operator==(const Position &pos)
{	
	if (x == pos.x && y == pos.y && th == pos.th)
	{
		return true;
	}
	else
	{
		return false;
	}	
}
