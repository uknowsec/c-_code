//main.cpp
#include<iostream>
#include"Renminbi.h"
using namespace std;
int main()
{
	Renminbi r1;
	Renminbi &r2=r1;
	r2.set();
	r2.display();
	return 0;
}