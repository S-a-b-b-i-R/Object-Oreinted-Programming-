//
// SabbirExperiment3.cpp
// C++
//
// Created by Sabbir Ahmed on 2019/3/4.
// Copyright 2019 Sabbir Ahmed. All rights reserved.
//

#include <iostream> 
#include <iomanip>
using namespace std;

class Automobile {
  public:
  void setPrice(double p);
  void setProfit(double p);
  double getPrice();
  double getProfit();

  private:
  double price;
  double profit;
};

void Automobile::setPrice(double p) {
  price = p;
}
void Automobile::setProfit(double p) {
  profit = p;
}
double Automobile::getProfit() {
  return profit;
}
double Automobile::getPrice() {
  return price;
}

int main() {
  double aPrice, aProfit, bPrice, bProfit;
  Automobile hyundai, jaguar;
  double tmpPrice, tmpProfit;
  cin >> tmpPrice >> tmpProfit;
  jaguar.setPrice(tmpPrice);
  jaguar.setProfit(tmpProfit);
  cin >> tmpPrice >> tmpProfit;
  hyundai.setPrice(tmpPrice);
  hyundai.setProfit(tmpProfit);
  aPrice = jaguar.getPrice();
  aProfit = jaguar.getProfit();
  cout << fixed << setprecision(2);
  cout << "jaguar " << aPrice << ":" << aProfit << endl;
  bPrice = hyundai.getPrice();
  bProfit = hyundai.getProfit();
  cout << fixed << setprecision(2);
  cout << "hyundai" << bPrice << ":" << bProfit << endl;
}
