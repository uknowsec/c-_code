#ifndef _CYLINDER		//cylinder.h
#define _CYLINDER

#include "circle.h"
#include "point.h"

class Cylinder:public Circle
{
public:
	Cylinder(float,float,float,float);		//�������캯��
	display();								//������Ա����
	volume();

protected:
	Point p;								//�����Ӷ���
	float h;								
};

#endif