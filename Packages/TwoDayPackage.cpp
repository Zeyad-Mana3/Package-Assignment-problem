#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string n, string a, string c, int p, string s, string r, double w, double st_w, double f) 
	: Package(n, a, c,  p,  s, r,  w, st_w)
{
	this->flatFee = f;
}

double TwoDayPackage::calculateCost()
{
	return ( flatFee + (getWeight()*getStrdCPG()));
}
