#pragma once
#include <string>
using namespace std;
class Package
{

private:
	string name;
	string address;
	string city;
	int PostalCode;
	string sender;
	string recipient;
	double weight;		//stores weight in gms
	double standardCostPerGms;		//strd cost per gram
public:

	Package(string n, string a, string c, int p, string s, string r, double w, double st_w);
	virtual double calculateCost();
	void setWeight(double w);
	void setStrdCPG(double strdCPG);
	double getWeight();
	double getStrdCPG();
	string getName();
	string getAdress();
	string getCity();
	string getSender();
	string getRecipient();
	int getPostalCode();
};

