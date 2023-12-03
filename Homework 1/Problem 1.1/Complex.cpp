/* CH-231-A
   hm1_p1.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <sstream>
#include "Complex.h"

using namespace std;  // for cout

Complex::Complex() {  // sets everything to 0
	real = imag = 0;
}
Complex::Complex(int r, int i) {  // initializes it to a given couple.
									  // Please note that here it is
	real = r;                         // not necessary to replicate the default value for the second parameter
	imag = i;
}

Complex::Complex(Complex& nr) : real(nr.real), imag(nr.imag) {
    // copies data members
}

Complex::~Complex()  {
    // empty destructor
}


void Complex::setRealpart(int newreal) {
	real = newreal;
}
void Complex::setImagpart(int newimag) {
	imag = newimag;
}

int Complex::getRealpart() {
    return real;
}

int Complex::getImagpart() {
    return imag;
}
ostream& operator<<(ostream &out, const Complex &CNr) {
    if (CNr.imag >= 0)
        out << CNr.real << "+" << CNr.imag << "i";
	else 
        out << CNr.real << CNr.imag << "i";
	return out;
}

istream& operator>>(istream& in, Complex &CNr) {
	
    string nr;
    getline(in, nr);
    char plus = '+';
    char minus = '-';
    int pos = 0;
    long long unsigned int i = 0; 
    for( i = 1; i < nr.length(); i++ )
        if( nr[i] == plus || nr[i] == minus )
        {
            pos = i;               
            break;
        }

    string RealPart = nr.substr(0, pos);
    string ImagPart = nr.substr(pos, nr.length() - 1);

    stringstream stringToIntRe(RealPart);
    stringToIntRe >> CNr.real;

    stringstream stringToIntIm(ImagPart);
    stringToIntIm >> CNr.imag;

    return in;
}

Complex Complex::operator+(const Complex& SndCNr) {
    Complex result((*this).real + SndCNr.real,
                   (*this).imag + SndCNr.imag);
	return result;
}

Complex Complex::operator-(const Complex& SndCNr) {
    Complex result((*this).real - SndCNr.real,
                   (*this).imag - SndCNr.imag);
    return result;
}

Complex Complex::operator*(const Complex& SndCNr) {
    Complex result((*this).real * SndCNr.real - 
                   (*this).imag * SndCNr.imag,
                   (*this).real * SndCNr.imag +
                   SndCNr.real * (*this).imag);
    return result;
}

bool Complex::operator==(const Complex& SndCNr) {
    if( (*this).real == SndCNr.real )
        if( (*this).imag == SndCNr.imag )
            return true;
        else
            return false;
    else
        return false;
}

Complex& Complex::operator=(const Complex& CNr) {
    real = CNr.real;
    imag = CNr.imag;
    return *this;
}

void Complex::print() {               // prints data to screen via cout
	if (imag) {
		cout << noshowpos << real << showpos << imag << "i" << endl;
	} else {
		cout << noshowpos << real << showpos << endl;
	}

}