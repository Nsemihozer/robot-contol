#include "RobotInterface.h"

void RobotInterface::setSensor(RangeSensor * sen)
{
	/*!
	* \brief RobotInterfacede ki sensor'e yeni bir sensor atamasi yapiyoruz.
	* @param sen Atama isleminde kullandigimiz sensor nesnesinin adresini tutan pointer
	*/
	rangeSensor = sen;
}
void RobotInterface::setPosition(Position * pos)
{
	/*!
	* \brief RobotInterfacede ki pozisyon nesnesine yeni bir pozisyon nesnesi atýyoruz atamasý yapýyoruz.
	* @param pos Atama isleminde kullandigimiz pozisyon nesnesinin adresini tutan pointer
	*/
	position = pos;
}
