// FunctionalSum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

void sum()
{
	double a, b;
	cout << "Enter two numbers:- \n";
	cin >> a >> b;
	cout << a << " + " << b << " = " << a + b << endl;
}

int main()
{
	sum();
    return 0;
}

