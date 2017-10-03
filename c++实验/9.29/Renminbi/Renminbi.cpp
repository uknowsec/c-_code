//Renminbi.cpp
#include<iostream>
#include"Renminbi.h"


void Renminbi::display()
{ 
	cout<<yuan<<"元"<<jiao<<"角"<<fen<<"分"<<endl;
}
void Renminbi::set()
{
	cout<<"依次输入元角分："<<endl;
	cin>>yuan;
	cin>>jiao;
	cin>>fen;
}
