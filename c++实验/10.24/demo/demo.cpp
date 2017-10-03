#include<iostream>			//demo.cpp
#include "cylinder.h"		//包含cylinder.h
#include "point.h"			//包含point.h
#include "circle.h"			//包含circle.h
#define PI 3.14159265 		//宏定义PI      
using namespace std;

int main()
{
	Cylinder cylinder1(10,20,30,40);
	cylinder1.display();			//输出数据
	return 0;

}