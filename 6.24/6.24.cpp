// 6.24.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CFeet {
private:
	int feet;
	int inch;
	int check();
public:
	CFeet();
	CFeet(int x, int y);
	int setData(int x, int y);
	void addData();
	void display();
	CFeet operator+(CFeet &ot);
};
CFeet CFeet ::operator+(CFeet &ot) {
	CFeet temp;
	temp.setData(feet + ot.feet, inch + ot.inch);
	return temp;
}
CFeet::CFeet(){
	feet = 0;
	inch = 0;
}
CFeet::CFeet(int x, int y) {
	feet = x;
	inch = y;
	check();
}

int CFeet::setData(int x, int y) {
	feet = x;
	inch = y;
	check();
	return 0;
}
int CFeet::check() {
	int temp = 1;
	if (inch >= 12) {
		feet = feet + inch / 12;
		inch = inch % 12;
		temp = 1;
	}
	return 0;
}
void CFeet::addData() {
	if (inch > 12) {
		feet = feet + inch / 12;
		inch = inch % 12;
	}
}
void CFeet::display() {
	cout << feet << "英尺" << inch << "英寸" << endl;
}
int main()
{
	CFeet no1, no2, no3;
	no1.setData(1, 24);
	no2.setData(1, 25);
	no3 = no1 + no2;
	no1.display();
	no2.display();
	no3.display();
    return 0;
}

