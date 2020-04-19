//
// SabbirExperiment3.cpp
// C++
//
// Created by Sabbir Ahmed on 2019/3/25.
// Copyright 2019 Sabbir Ahmed. All rights reserved.
//


#include <iostream> 
#include <iomanip>
using namespace std;

class Circle{
	public:
	Circle(){}
	Circle(double rad_pool)
	{
		this->radius = rad_pool;
	}
	void setr(double rad_fence)
	{
		this->radius = rad_fence;
	}
	double getArea()
	{
		return 3.14*radius*radius;
	}
	double getCircumference()
	{
		return 2*3.14*radius;
	}
	private:
		double radius;
};

int main()
{
    double r_pool=0, r_fence=0;
    double price_aisle=0,price_fence=0;
    cin>>r_pool>>r_fence;
    Circle pool(r_pool), fence;
    fence.setr(r_fence);
    price_aisle=20*(fence.getArea()-pool.getArea());
    price_fence=15*fence.getCircumference();
    cout << setprecision(2) << fixed << endl;
    cout<<price_aisle<<" "<<price_fence<<endl;
}
