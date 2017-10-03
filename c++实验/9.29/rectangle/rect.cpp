//rect.cpp
#include<iostream>
#include"rect.h"
using namespace std;

void rect::set()
{
	cout<<"Please enter length&width"<<endl;
	cin>>length;
	cin>>width;
}
void rect::get_r()
{	
	int area,circumference;
	circumference=(length+width)*2;
	area=length*width;
	cout<<"circumference:"<<circumference<<endl;
	cout<<"area:"<<area<<endl;
}

