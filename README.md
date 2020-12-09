# Package-Assignment-problem
Assignment three - CIE 202 - Fall 2020

## Problem Statment


Package-delivery services, such as **FedEx®, DHL® and UPS®**, offer several different shipping
options, each with specific associated costs. Create an inheritance hierarchy to represent various
types of packages as follows:
1) Use **Package** as the base class of the hierarchy
2) Include classes **TwoDayPackage** and **OvernightPackage** that derive from Package.
3) Base class Package should include data members representing the **name, address, city and**
**Postal code for both the sender and the recipient of the package**, in addition to data members
that store the **weight (in gms)** and **standard cost per gm to ship the package**. Package’s
constructor should initialize these data members. Ensure that the weight and cost per gm
contain positive values.
4) Package class should contain a public member function **calculateCost()** that returns a double
indicating the cost associated with shipping the package.
5) Package’s calculateCost() function should determine the cost by multiplying the weight by
the standard cost per gm.
6) Derived class TwoDayPackage should inherit the functionality of base class Package, but
also includes a data member that represents a **flat fee** that the shipping company charges for
two-day-delivery service. TwoDayPackage’s constructor should receive a value to initialize
this data member.
7) TwoDayPackage should redefine member function **calculateCost()** so that it computes the
shipping cost by adding the flat fee to the weight-based cost calculated by base class Package’s
calculateCost() function.
8) Class OvernightPackage should inherit directly from base class Package and should contain
an additional data member representing an additional fee per gm charged for overnight-
delivery service.

9) OvernightPackage should redefine member function **calculateCost()** so that it adds the
additional fee per gm to the standard cost per gm before calculating the shipping cost.


Write a test main program that creates objects of each of three package types and tests member
functions calculateCost().
