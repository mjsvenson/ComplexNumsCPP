// Matthew Svenson
#pragma once
#ifndef MY_COMPLEX_H
#define MY_COMPLEX_H

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class ComplexNums
{
public:
	void ComplexNum();
	void ComplexNum(double real);
	void ComplexNum(double real, double imag);
	double getReal();
	double getImag();
	void setReal(double in);
	void setImag(double in);

	friend ostream& operator<<(ostream& os, ComplexNums &output);
	friend ComplexNums& operator>>(istream& is, ComplexNums &input);
	friend ComplexNums operator+ (ComplexNums c1, ComplexNums c2);
	friend ComplexNums operator- (ComplexNums c1, ComplexNums c2);
	friend ComplexNums operator* (ComplexNums c1, ComplexNums c2);
	friend ComplexNums operator! (ComplexNums c1);


private:
	double real;
	double imag;
};

#endif MY_COMPLEX_H
