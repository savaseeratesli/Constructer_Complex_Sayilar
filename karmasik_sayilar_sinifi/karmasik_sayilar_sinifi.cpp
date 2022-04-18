#include <iostream>
#include"karmasikSayilar.h"

using namespace std;

void aralik()
{
    cout << "##############################" << endl;
}

int main()
{
    complexNumber number1(4, 5);

    cout << "Real:" << number1.getReal() << endl;
    cout << "Imag:" << number1.getImag() << endl;

    number1.displayComplex();

    aralik();

    complexNumber number2(4, -5);

    cout << "Real:" << number2.getReal() << endl;
    cout << "Imag:" << number2.getImag() << endl;

    number2.displayComplex();

    aralik();

    complexNumber number3(number2);//Kopyalandı
    number3.displayComplex();
    number3.setValue(1,9);
    number3.displayComplex();

    aralik();

    complexNumber resultMain;
    resultMain = number1.addComplex(number2);
    resultMain.displayComplex();

    aralik();

    complexNumber resultMain2;
    resultMain2 = number1.subtractComlex(number2);
    resultMain2.displayComplex();

    aralik();

    complexNumber resultMain3;
    resultMain3 = number1.multiplyConstant(9);
    resultMain3.displayComplex();

    aralik();

    complexNumber resultMain4;
    resultMain4 = number1.multiplyComplex(number2);
    resultMain4.displayComplex();

    aralik();

    return 0;
}

