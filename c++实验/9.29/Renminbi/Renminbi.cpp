//Renminbi.cpp
#include<iostream>
#include"Renminbi.h"


void Renminbi::display()
{ 
	cout<<yuan<<"Ԫ"<<jiao<<"��"<<fen<<"��"<<endl;
}
void Renminbi::set()
{
	cout<<"��������Ԫ�Ƿ֣�"<<endl;
	cin>>yuan;
	cin>>jiao;
	cin>>fen;
}
