#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(string n, string a, string c, int p, string s, string r, double w, double st_w, double add)
	: Package(n, a, c, p, s, r, w, st_w)
{
	this->AdditionalFee = add;
}

double OvernightPackage::calculateCost()
{
	return (getStrdCPG() * AdditionalFee) + (getWeight() * getStrdCPG());
}

void OvernightPackage::setAddFee(double add)
{
		this->AdditionalFee = add;
}

double OvernightPackage::getAddFee()
{
	return AdditionalFee;
}
