// Matthew Svenson
#include "ComplexNums.h"


//Constructors
void ComplexNums::ComplexNum()
{
	real = 0;
	imag = 0;
}
void ComplexNums::ComplexNum(double ireal)
{
	real = ireal;
	imag = 0;
}
void ComplexNums::ComplexNum(double ireal, double iimag)
{
	real = ireal;
	imag = iimag;
}


//Getters
double ComplexNums::getReal()
{
	return real;
}
double ComplexNums::getImag()
{
	return imag;
}

//Setters
void ComplexNums::setReal(double in)
{
	real = in;
}
void ComplexNums::setImag(double in)
{
	imag = in;
}

//Output
ostream& operator<<(ostream& os, ComplexNums &output)
{
	if (output.getImag() == 0 && output.getReal() == 0)
		return os << endl;
	if (output.getImag() == 0)
		return os << output.getReal() << endl;
	if (output.getReal() == 0)
		return os << output.getImag() << 'i' << endl;
	if (output.getImag() < 0)
		return os << output.getReal() << output.getImag() << 'i' << endl;
	else
		return os << output.getReal() << '+' << output.getImag() << 'i' << endl;
}

//Input
ComplexNums& operator>>(istream& is, ComplexNums &input)
{
	int ir, ii;
	is >> ir >> ii;
	input.setReal(ir);
	input.setImag(ii);
	return input;
}

//Addition
ComplexNums operator+ (ComplexNums c1, ComplexNums c2)
{
	ComplexNums result;
	result.setReal(c1.getReal() + c2.getReal());
	result.setImag(c1.getImag() + c2.getImag());
	return result;
}

//Subtraction
ComplexNums operator- (ComplexNums c1, ComplexNums c2)
{
	ComplexNums result;
	result.setReal(c1.getReal() - c2.getReal());
	result.setImag(c1.getImag() - c2.getImag());
	return result;
}

//Multiplication
ComplexNums operator* (ComplexNums c1, ComplexNums c2)
{
	ComplexNums result;
	result.setReal((c1.getReal() * c2.getReal()) - (c1.getImag() * c2.getImag()));
	result.setImag((c1.getReal() * c2.getImag()) + (c2.getReal() * c1.getImag()));
	return result;
}

//Conjugate
ComplexNums operator! (ComplexNums c1)
{
	ComplexNums result;
	result.setReal(c1.getReal());
	result.setImag(c1.getImag() * -1);
	return result;
}





