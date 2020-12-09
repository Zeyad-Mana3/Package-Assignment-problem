#pragma once
#include "Package.h"
#include <iostream>
class OvernightPackage :
    public Package
{

private:
    double AdditionalFee;


public:

    OvernightPackage(string n, string a, string c, int p, string s, string r, double w, double st_w, double add);
    double calculateCost();
    void setAddFee(double add);    
    double getAddFee();
};

