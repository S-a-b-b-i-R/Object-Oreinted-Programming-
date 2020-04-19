//
// SabbirExperiment3.cpp
// C++
//
// Created by Sabbir Ahmed on 2019/4/1.
// Copyright 2019 Sabbir Ahmed. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>

using namespace std;


class Point{
	public:
		Point(int x, int y){
			x1 = x;
			y1 = y;
		}
		Point(){
			x1 = 0;
			y1 = 0;
		}
		void setX(int x);
		void setY(int y);
		int getX();
		int getY();		
	private:
		int x1;
		int y1;	
};
void Point::setX(int x){
	x1 = x;
}
void Point::setY(int y){
	y1 = y;
}
int Point::getX(){
	return x1;
}
int Point::getY(){
	return y1;
}
class Rectangle{
	private:
		Point p1, p2;
	public:
		Rectangle (Point p, Point q){
			p1 = p;
			p2 = q;
		}
		string getArea(){
			char c [10];
			int Area = (p2.getX() - p1.getX()) * (p2.getY() -p1.getY());
			if (Area < 0){
				strcpy(c, "invalid");
			}
			else {
			sprintf(c, "%d", Area);
			}
			return c;
		}	
}; 

int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	Point p1(x1, y1), p2;
	p2.setX(x2);
	p2.setY(y2);
	Rectangle rect(p1, p2);
	cout << rect.getArea() << endl;
	return 0;
}
