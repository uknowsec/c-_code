#include<iostream>            //point.cpp
#include "point.h"			//���� point.h
#define PI 3.14159265       //�궨��PI
using namespace std;

Point::Point()				//�޲ι��캯����ʼ��
{
	x=0.0;
	y=0.0;
}

Point::Point(float newx,float newy)		//�вι��캯����ʼ��
{
	x=newx;
	y=newy;
}

Point::show_point()					//���x,y
{
	cout<<"central_point: ("<<x<<","<<y<<")"<<endl;
}