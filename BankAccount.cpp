//
// SabbirExperiment8.cpp
// C++
//
// Created by Sabbir Ahmed on 2019/4/18.
// Copyright 2019 Sabbir Ahmed. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Class for amounts of money in U.S. currency
class Money
{
public:
    Money();
    Money(double amount);
    Money(int dollars, int cents);
    Money(int dollars);
    double getAmount() const;
    int getDollars() const;
    int getCents() const;
    void input(); //reads the dollar sign as well as the amount number
    void output() const;
    const Money operator + (const Money& amount1) const;
    const Money operator - (const Money& amount2) const;
    bool operator == (const Money& amount2) const;
    const Money operator -() const;
private:
    int dollars;//A negative amount is represented as negative dollars and
    int cents;
    int dollarsPart(double amount) const;
    int centsPart(double amount) const;
    int round(double number) const;
};
const Money Money::operator +(const Money& secondOperand) const
{
    int allCents1 = cents + dollars*100;
    int allCents2 = secondOperand.cents + secondOperand.dollars*100;
    int sumAllCents = allCents1 + allCents2;
    int absAllCents = abs(sumAllCents);
    int finalDollars = absAllCents/100;
    int finalCents = absAllCents%100;
    if (sumAllCents < 0)
    {
        finalDollars = -finalDollars;
        finalCents = - finalCents;
    }
    return Money(finalDollars, finalCents);
}
const Money Money::operator -(const Money& secondOperand) const
{
    int allCents1 = cents + dollars*100;
    int allCents2 = secondOperand.cents + secondOperand.dollars*100;
    int diffAllCents = allCents1- allCents2;
    int absAllCents = abs(diffAllCents);
    int finalDollars = absAllCents/100;
    int finalCents = absAllCents%100;
    if (diffAllCents < 0)
    {
        finalDollars = -finalDollars;
        finalCents = -finalCents;
    }
    return Money(finalDollars, finalCents);
}
bool Money::operator ==(const Money& secondOperand) const
{
    return ((dollars == secondOperand.dollars) && (cents == secondOperand.cents));
}
const Money Money::operator -() const
{
	return Money(-dollars, -cents);
}
double Money::getAmount() const
{
	return (dollars + cents*0.01);
}
int Money::getDollars() const
{
	return dollars;
}
int Money::getCents() const
{
	return cents;
}
void Money::output() const
{
	int absDollars = abs(dollars);
	int absCents = abs(cents);
	if (dollars < 0 || cents < 0)
		cout << "$-";
	else
		cout << "$";
	cout << absDollars;
	
	if (absCents >= 10)
		cout << '.' << absCents;
	else 
		cout << '.' << '0' << absCents; 
}
void Money::input()
{
	char dollarSign;
	cin >> dollarSign;
	if (dollarSign != '$')
	{
		cout << "No dollar sign in Money input.\n";
		exit(1);
	}
	double amountAsDouble;
	cin >> amountAsDouble;
	dollars = dollarsPart(amountAsDouble);
	cents = centsPart(amountAsDouble);
}
int Money::dollarsPart(double amount) const
{
	return static_cast<int>(amount);
}
int Money::centsPart(double amount) const
{
	double doubleCents = amount*100;
	int intCents = (round(fabs(doubleCents)))%100;
	if (amount < 0)
		intCents = -intCents;
	return intCents;
}
int Money::round(double number) const
{
	return static_cast<int>(floor(number + 0.5));
}
Money::Money(): dollars(0), cents(0)
{
	
}
Money::Money(double amount): dollars(dollarsPart(amount)), cents(centsPart(amount))
{
	
}
Money::Money(int theDollars): dollars(theDollars), cents(0)
{
	
}
Money::Money(int theDollars, int theCents)
{
	if ((theDollars < 0 && theCents > 0) || (theDollars > 0 && theCents < 0))
	{
		cout << "Inconsistent money data.\n";
		exit(1);
	}
	dollars = theDollars;
	cents = theCents;
}
int main()
{
    Money yourAmount, myAmount(10, 9);
    yourAmount.input( );
    yourAmount.output( );
    cout << endl;
    if (yourAmount == myAmount)
        cout << "We have the same amounts.\n";
    else
        cout << "One of us is richer.\n";
    Money ourAmount = yourAmount + myAmount;
    ourAmount.output( ); cout << endl;
    Money diffAmount = yourAmount - myAmount;
    diffAmount.output( ); cout << endl;
    Money NegtiveAmount = -yourAmount;
    NegtiveAmount.output( ); cout << endl;
    return 0;
    
}
