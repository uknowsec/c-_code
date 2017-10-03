/*
* @Author: Uknow
* @Date:   2016-10-19 21:27:14
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-19 21:30:36
*/

/*
类外面加上这句就好了：

int CSta::fuck = 0;


还有种办法，如果这个是常量的话，可以在类里定义：
static const int fuck = 0;
*/


#include <iostream>
using namespace std;

class Box
{
public:
	Box(int,int);
	int volume();
	static int height;
	int width;
	int length;
	
};

int Box::height = 0;   //绫诲闈㈠姞涓

Box::Box(int w,int len)
{
	width=w;
	length=len;
}

int Box::volume()
{
	return (height*width*length);
}
int main()
{
	Box a(15,20),b(20,30);
	cout<<a.height<<endl;
	cout<<b.height<<endl;
	cout<<Box::height<<endl;
	cout<<a.volume()<<endl;
    return 0;
}

/*
绫诲闈㈠姞涓婅繖鍙ュ氨濂戒簡锛
鎼滅储
int CSta::fuck = 0;


杩樻湁绉嶅姙娉曪紝濡傛灉杩欎釜鏄父閲忕殑璇濓紝鍙互鍦ㄧ被閲屽畾涔夛細
static const int fuck = 0;
*/