#include<iostream>			//circle.cpp
#include "circle.h" 		//����cricle.h
#define PI 3.14159265		//�궨�� PI
using namespace std;

Circle::Circle()		//�޲ι��캯��
{
	r=0.0;
}

Circle::Circle(float newr)	//�вι��캯��
{
	r=newr;
}

Circle::area()				//�������
{
	return r*r*PI;
}

Circle::display()				//���r,area
{
	cout<<"circle_rad:"<<r<<endl;
	cout<<"circle_area:"<<area()<<endl;
}