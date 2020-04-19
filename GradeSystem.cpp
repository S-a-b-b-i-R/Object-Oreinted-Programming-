//
// SabbirExperiment3.cpp
// C++
//
// Created by Sabbir Ahmed on 2019/3/11.
// Copyright 2019 Sabbir Ahmed. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Grade{
	public:
		void setQuiz(double q1, double q2);
		void setMid(double m);
		void setFinal(double f);
		void setTotal(double t);
		double getQuiz();
		double getMid();
		double getFinal();
		double getTotal();
		
		
	private:
		double Q;
		double M;
		double F;
		double T;
};

void Grade :: setQuiz(double q1, double q2) {
	Q=((q1*10)+(q2*10))/8;
}
void Grade :: setMid(double m) {
	M=m/4;
}
void Grade :: setFinal(double f) {
	F=f/2;
}
void Grade :: setTotal(double t) {
	T=Q+M+F;
	if(T>=90)
	{
		cout << fixed << setprecision(2);
		cout << T << " A " << endl;
	}
	if(80<=T && T<90)
	{
		cout << fixed << setprecision(2);
		cout << T << " B " << endl;
	}
	if(70<=T && T<80)
	{
		cout << fixed << setprecision(2);
		cout << T << " C " << endl;
	}
	if(60<=T && T<70)
	{
		cout << fixed << setprecision(2);
		cout << T << " D " << endl;
	}
	if(T<60)
	{
		cout << fixed << setprecision(2);
		cout << T << " F " << endl; 
	}
}

double Grade :: getQuiz() {
	return Q;
}
double Grade :: getMid() {
	return M;
}
double Grade :: getFinal() {
	return F;
}
double Grade :: getTotal() {
	return T;
}

int main()
{
	Grade student;
	double tmpQ1, tmpQ2, tmpM, tmpF, tmpT;
	cin >> tmpQ1 >> tmpQ2 >> tmpM >> tmpF;
	student.setQuiz(tmpQ1, tmpQ2);
	student.setMid(tmpM);
	student.setFinal(tmpF);
	student.setTotal(tmpT);
}
