#include <iostream>

using namespace std;

class complexNumber
{
private:
	int real,imag;

public:
	complexNumber(int r = 0, int i = 0);
	~complexNumber();
	complexNumber(const complexNumber& oth);
	int getReal() const
	{
		return real;
	}
	int getImag() const
	{
		return imag;
	}
	void setValue(int r = 0, int i = 0);
	complexNumber addComplex(const complexNumber& oth);
	complexNumber multiplyComplex(const complexNumber& oth);
	complexNumber subtractComlex(complexNumber& oth);
	complexNumber multiplyConstant(int constant);//Constant
	void multiplyMinus();
	void displayComplex();

};


complexNumber::complexNumber(int r, int i)
{
	real = r;
	imag = i;

	cout << "Complex Sayi Olustu" << endl;
}

complexNumber::~complexNumber()
{
	cout << "Complex Sayi Silindi" << endl;
}

complexNumber::complexNumber(const complexNumber& oth)
{
	real = oth.real;
	imag = oth.imag;

	cout << "Complex Sayi Kopyalandi" << endl;
}

void complexNumber::setValue(int r,int i)
{
	real = r;
	imag = i;
}

void complexNumber::displayComplex()
{
	//Eðer ki sanal kýsým 0 dan büyük ise : sanal kýsým 0 dan küçük ise ? :
	imag >= 0 ? cout << real << "+" << imag << "i" << endl : cout << real << imag << "i" << endl;
}

//Tür-class ayný isimle copy const oluþur ve destroy edilir.
complexNumber complexNumber::addComplex(const complexNumber& oth)
{
	complexNumber result;

	result.real = real + oth.real;//number1.addComplex(number2) number1->real number2->oth.real
	result.imag = imag + oth.imag;
	return result;

}

complexNumber complexNumber::subtractComlex(complexNumber& oth)
{
	complexNumber result;//Nesne üretildi

	oth.multiplyMinus();//Sayýyý - yaptýk
	result = addComplex(oth);
	return result;

}

void complexNumber::multiplyMinus()//Sayýyý - yap
{
	//4+5i-(5+7i)
	real *= -1;
	imag *= -1;
}

//Sabit sayýyla çarpma
complexNumber complexNumber::multiplyConstant(int constant)
{
	complexNumber result;

	result.real = real * constant;
	result.imag = imag * constant;

	return result;

}


complexNumber complexNumber::multiplyComplex(const complexNumber& oth)
{
	complexNumber result;

	//Formul
	result.real = real * oth.real - imag * oth.imag;
	result.imag = real * oth.imag + imag * oth.real;

	return result;

}







