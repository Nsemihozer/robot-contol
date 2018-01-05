#pragma once

#include<iostream>

class Position
{
private:
	float x;
	float y;
	float th;
public:
	Position(float=0, float=0, float=0);
	~Position();
	float getX();
	void setX(float x);
	void setY(float y);
	float getY();
	void setTh(float th);
	float getTh();
	bool operator==(const Position&);
};