// Matthew Svenson
#include "ComplexNums.h"

// This is example code to demonstrate the Complex Numbers class.

int main(int argc, char* argv[])
{
	ComplexNums c1, c2, c3;
	c1.ComplexNum(-1.01, -3.7);
	cout << "This complex number was intialized with a constructor consisting of two parameters (-1.01 and -3.7)" << endl;
	cout << "The real number is: " << c1.getReal() << endl;
	cout << "The Imaginary number is: " << c1.getImag() << endl;
	cout << "This would output as " << c1;

	cout << endl;

	c1.setReal(2.25);
	c1.setImag(5.35);
	cout << "This complex number was intialized using the set methods (2.25 and 5.35)" << endl;
	cout << "The real number is: " << c1.getReal() << endl;
	cout << "The Imaginary number is: " << c1.getImag() << endl;
	cout << "This would output as " << c1;

	cout << endl;

	c2.ComplexNum(-1.23);
	cout << "This complex number was intialized with a constructor consisting of one parameters (-1.23)" << endl;
	cout << "The real number is: " << c2.getReal() << endl;
	cout << "The Imaginary number is: " << c2.getImag() << endl;
	cout << "This would output as " << c2;

	cout << endl;

	c3.ComplexNum();
	cout << "This complex number was intialized with a constructor consisting of no parameters (0 and 0 are the defaults)" << endl;
	cout << "The real number is: " << c3.getReal() << endl;
	cout << "The Imaginary number is: " << c3.getImag() << endl;
	cout << "This would output as (nothing) " << c3;

	cout << "Enter in the real number followed by the imaginary number to set this complex number to different values: ";
	cin >> c3;

	ComplexNums result;

	//Addition
	result = c1 + c3;
	cout << "First complex number + third complex number = ";
	cout << result << endl;

	//Subtraction
	result = c1 - c3;
	cout << "First complex number - third complex number = ";
	cout << result << endl;

	//Multiplication
	result = c1 * c3;
	cout << "First complex number * third complex number = ";
	cout << result << endl;

	//Conjugation
	result = !c3;
	cout << "The conjugate of the third complex number = ";
	cout << result << endl;

	return 1;

}