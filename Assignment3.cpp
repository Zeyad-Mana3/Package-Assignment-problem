// Assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include <string>
#include <fstream>
using namespace std;

//function to create objects
Package* createPackage(string n, string a, string c, int p, string s, string r, double w, double st_w)
{
	return new Package(n, a, c, p, s, r, w, st_w);
}

Package* createTwoDayPackage(string n, string a, string c, int p, string s, string r, double w, double st_w, double f)
{
	return new TwoDayPackage(n, a, c, p, s, r, w, st_w, f);
}
Package* createOvernightPackage(string n, string a, string c, int p, string s, string r, double w, double st_w, double add)
{
	return new OvernightPackage(n, a, c, p, s, r, w, st_w, add);
}


int main()
{
	// ==============
	// instantiating objects for each package...
	// =============
	Package* a = createPackage("Zeyad", "Dokki, 49", "Giza", 12456, "Zeyad", "Ahmed", 550, 0.5);
	Package* b = createTwoDayPackage("Eman", "Haram, 49", "Giza", 12456, "Eman", "Walaa", 650, 0.8, 40);
	Package* c = createOvernightPackage("Muhammed", "Tahrir, 49", "Cairo", 12456, "Muhammed", "Gouda", 795, 0.3, 80);

	// == checking object's package type ==
	TwoDayPackage* at = dynamic_cast<TwoDayPackage*>(a);
	TwoDayPackage* bt = dynamic_cast<TwoDayPackage*>(b);
	TwoDayPackage* ct = dynamic_cast<TwoDayPackage*>(c);

	OvernightPackage* ao = dynamic_cast<OvernightPackage*>(a);
	OvernightPackage* bo = dynamic_cast<OvernightPackage*>(b);
	OvernightPackage* co = dynamic_cast<OvernightPackage*>(c);


	// creating file to save data in
	ofstream file;
	string filename;
	cout << "Enter a file name to save your Data:\t";
	getline(std::cin, filename);
	cout << "A file has been created with your desired data.. \n\n ";
	cout << "\t\t\t=================================\n";
	file.open(filename + ".txt");
	file << "Your desired Data: \n";


	cout << "Calculating cost..." << endl;
	// two days package
	if (at != NULL)
	{
		cout << "Two Days Package/s Cost is " << at->calculateCost() << " EGP"; //result at command promt
		file << "Two Days Package/s Cost is " << at->calculateCost() << " EGP" << endl << endl;
		file << "Detailed Data of this package.." << endl << endl;
		file << at->getName() << "\t" << at->getAdress() << "\t" << at->getCity() << "\t" << at->getSender() << "\t"
			<< at->getRecipient() << "\t" << at->getPostalCode() << endl;
		file << endl;

		cout << endl;
	}
	if (bt != NULL)
	{
		cout << "Two Days Package/s Cost is " << bt->calculateCost() << " EGP";
		file << "Two Days Package/s Cost is " << bt->calculateCost() << " EGP" << endl << endl;
		file << "Detailed Data of this package.." << endl << endl;
		file << bt->getName() << "\t" << bt->getAdress() << "\t" << bt->getCity() << "\t" << bt->getSender() << "\t"
			<< bt->getRecipient() << "\t" << bt->getPostalCode() << endl;
		file << endl;
		cout << endl;
	}
	if (ct != NULL)
	{
		cout << "Two Days Package/s Cost is " << ct->calculateCost() << " EGP";
		file << "Two Days Package/s Cost is " << ct->calculateCost() << " EGP" << endl << endl;
		file << "Detailed Data of this package.." << endl << endl;
		file << ct->getName() << "\t" << ct->getAdress() << "\t" << ct->getCity() << "\t" << ct->getSender() << "\t"
			<< ct->getRecipient() << "\t" << ct->getPostalCode() << endl;
		file << endl;
		cout << endl;

	}

	// Over night package
	if (ao != NULL)
	{
		cout << "Over Night Package/s Cost is " << ao->calculateCost() << " EGP";
		file << "Over Night Package/s Cost is " << ao->calculateCost() << " EGP" << endl << endl;
		file << "Detailed Data of this package.." << endl << endl;
		file << ao->getName() << "\t" << ao->getAdress() << "\t" << ao->getCity() << "\t" << ao->getSender() << "\t"
			<< ao->getRecipient() << "\t" << ao->getPostalCode() << endl;
		file << endl;
		cout << endl;

	}
	if (bo != NULL)
	{
		cout << "Over Night Package/s Cost is " << bo->calculateCost() << " EGP";
		file << "Over Night Package/s Cost is " << bo->calculateCost() << " EGP" << endl << endl;
		file << "Detailed Data of this package.." << endl << endl;
		file << bo->getName() << "\t" << bo->getAdress() << "\t" << bo->getCity() << "\t" << bo->getSender() << "\t"
			<< bo->getRecipient() << "\t" << bo->getPostalCode() << endl;
		file << endl;
		cout << endl;
	}
	if (co != NULL)
	{
		cout << "Over Night Package/s Cost is " << co->calculateCost() << " EGP";
		file << "Over Night Package/s Cost is " << co->calculateCost() << " EGP" << endl << endl;
		file << "Detailed Data of this package.." << endl << endl;
		file << co->getName() << "\t" << co->getAdress() << "\t" << co->getCity() << "\t" << co->getSender() << "\t"
			<< co->getRecipient() << "\t" << co->getPostalCode() << endl;
		file << endl;
		cout << endl;
	}
	file.close();
	cout << "\t\t\t=================================";
	return 0;
}



