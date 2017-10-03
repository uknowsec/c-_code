/*
* @Author: Uknow
* @Date:   2016-10-17 15:33:08
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-17 21:12:53
*/

class A
{
public:
	int i;
protected:
	void f1();
	int j;
private:
	intk
};

class B:public A
{
public:
	void f2();
protected:
	void f3();
private:
	int m;
};

class C:protected B
{
public:
	void f4();
private:
	int n;
};