#include "Package.h"
#include <iostream>
using namespace std;
Package::Package(string n, string a, string c, int p, string s, string r, double w, double st_w)
{
	this->name = n;
	this->address = a;
	this->city = c;
	this->PostalCode = p;
	this->sender = s;
	this->recipient = r;
	setWeight(w);		//to insure it has a postive value
	setStrdCPG(st_w);	//to insure it has a postive value
}

double Package::calculateCost()
{
	return weight*standardCostPerGms;
}

void Package::setWeight(double w)
{
	if (w > 0.0)
	{
		this->weight = w;
	}
	else
	{
		throw invalid_argument("Weight must take a positive value, Please enter again... ");
	}
}

void Package::setStrdCPG(double strdCPG)
{
	if (strdCPG > 0.0)
		this->standardCostPerGms = strdCPG;
	else
	{
		throw invalid_argument("Std_cost per gram must be positive, please enter again... ");
	}
}

double Package::getWeight()
{
	return weight;
}

double Package::getStrdCPG()
{
	return standardCostPerGms;
}

string Package::getName()
{
	return name;
}

string Package::getAdress()
{
	return address;
}

string Package::getCity()
{
	return city;
}

string Package::getSender()
{
	return sender;
}

string Package::getRecipient()
{
	return recipient;
}

int Package::getPostalCode()
{
	return PostalCode;
}
