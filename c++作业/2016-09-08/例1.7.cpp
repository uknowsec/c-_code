#include<iostream>
using namespace std;
int max(int a,int b,int c)
{
	if(b>a) a=b;
	if(c>a) a=c;
	return a;
}
int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int main()
{
	int a=7,b=-4,c=9;
	cout<<"max_3="<<max(a,b,c)<<endl;
	cout<<"max_2="<<max(a,b)<<endl;
}