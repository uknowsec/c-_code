#include<iostream>			//demo.cpp
#include "cylinder.h"		//����cylinder.h
#include "point.h"			//����point.h
#include "circle.h"			//����circle.h
#define PI 3.14159265 		//�궨��PI      
using namespace std;

int main()
{
	Cylinder cylinder1(10,20,30,40);
	cylinder1.display();			//�������
	return 0;

}