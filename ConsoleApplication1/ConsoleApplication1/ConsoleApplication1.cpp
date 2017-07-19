// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Base
{
public:
    Base() {}
    ~Base() { cout << "Base Dtor" << endl; }
};

class Derived: public Base
{
public:
    Derived() {}
    ~Derived() { cout << "Derived Dtor" << endl; }
};

class Derived2: public Derived
{
public:
    Derived2() {}
    ~Derived2() { cout << "Derived2 Dtor" << endl; }
};

int main()
{
    //Base* pBase = new Derived2();
    //delete pBase;

    Derived* pD = new Derived2();
    delete pD;

    return 0;
}

