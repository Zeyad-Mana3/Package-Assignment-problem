#pragma once
#include "Package.h"
class TwoDayPackage :
    public Package
{
private:
    double flatFee;


public:

    TwoDayPackage(string n, string a, string c, int p, string s, string r, double w, double st_w, double f);
    double calculateCost();
};

