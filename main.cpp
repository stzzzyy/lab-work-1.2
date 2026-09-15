#include <iostream>

int main() {

    //Завдання 1

    //Short [-32768; 32767]

    const short CONST_SHORT = 024; // Перше значення в якості константи. Вісімкова система: 2*8+4 = 20
    short       nShortVal2 = 387; // Десяткова форма
    short       nShortVal3;
                nShortVal3 = 0x5b; // Шістнадцяткова форма 5*16+11=91

    //Int [-2147483648; 2147483647]

    const int CONST_INT = 456;
    int       nIntVal2 = 74.8; //Дробова частина відсікається, результат - 74
    int       nIntVal3;
              nIntVal3 = -428557;

    //Long [-2147483648; 2147483647]

    const long CONST_LONG = 2568912795; // Число виходить за межі діапазону long, тому при перетворенні до long
                                        // отримується значення, яке не відповідає початковому числу.
    long       lLongVal2 = 43.3; //Дробова частина відсікається, результат - 43
    long       lLongVal3;
               lLongVal3 = -45;

    //Unsigned Short [0; 65535]

    const unsigned short CONST_UNSIGNEDSHORT   = 70;
    unsigned short       usUnShortVal2 = 456239; //Число виходить за межі діапазону unsigned short. Виходить 63023
    unsigned short       usUnShortVal3;
                         usUnShortVal3 = -37; //Втрата знаку: інтерпретація як 65536 - 37 = 65499

    std::cout << "\n               PART 1 \n\n";

    std::cout << "Short Const Value 1: " << CONST_SHORT << std::endl;
    std::cout << "Short Value 2:       " << nShortVal2 << std::endl;
    std::cout << "Short Value 3:       " << nShortVal3 << std::endl;
    std::cout << "\n                   ";

    std::cout << "Int Const Value 1: " << CONST_INT << std::endl;
    std::cout << "Int Value 2:       " << nIntVal2 << std::endl;
    std::cout << "Int Value 3:       " << nIntVal3 << std::endl;
    std::cout << "\n                 ";

    std::cout << "Long Const Value 1: " << CONST_LONG << std::endl;
    std::cout << "Long Value 2:       " << lLongVal2 << std::endl;
    std::cout << "Long Value 3:       " << lLongVal3 << std::endl;
    std::cout << "\n                  ";

    std::cout << "Unsigned Short Const Value 1: " << CONST_UNSIGNEDSHORT << std::endl;
    std::cout << "Unsigned Short Value 2:       " << usUnShortVal2 << std::endl;
    std::cout << "Unsigned Short Value 3:       " << usUnShortVal3 << std::endl;
    std::cout << "\n                            ";

    //Завдання 2

    //Float [+/- 1.5e38]

    const float CONST_FLOAT = -45.678e-43f;
    float       fFloatVal1 = 25167876500.01f; // Втрата точності: тип float гарантує лише 6-7 значущих цифр
    float       fFloatVal2;
                fFloatVal2 = 0.120002312f;

    //Double [+/- 1.5e308]

    const double CONST_DOUBLE = -45.678e-1333; //Число дуже мале, тому видає -0
    double dDoubleVal2;
           dDoubleVal2 = 0.767e65;

    std::cout << "               PART 2 \n\n";

    std::cout << "Float Const Value 1:      " << CONST_FLOAT << std::endl;
    std::cout << "Float Value 2:            " << fFloatVal1 << std::endl;
    std::cout << "Float Value 3:            " << fFloatVal2 << std::endl;
    std::cout << "\n                        ";

    std::cout << "Double Value 1:           " << CONST_DOUBLE << std::endl;
    std::cout << "Double Value 2:           " << dDoubleVal2 << std::endl;
    std::cout << "\n                        ";

    //Завдання 3

    int    nUnaryPlus  = +76;
    int    nUnaryMinus = -(-32);
    int    nSum        = -117 + 68;
    int    nDiff       = -65 - 99;
    int    nMult       = 18 * 4;
    int    nDiv        = 16 / 4;
    int    nDiv2       = 16 / 3;
    int    nMod        = 28 % 5;
    double dRealDiv    = 44.0 / 5;

    std::cout << "               PART 3 \n\n";

    std::cout << "nUnaryPlus:               " << nUnaryPlus << std::endl;
    std::cout << "nUnaryMinus:              " << nUnaryMinus << std::endl;
    std::cout << "nSum:                     " << nSum << std::endl;
    std::cout << "nDiff:                    " << nDiff << std::endl;
    std::cout << "nMult:                    " << nMult << std::endl;
    std::cout << "nDiv:                     " << nDiv << std::endl;
    std::cout << "nDiv:                     " << nDiv2 << std::endl;
    std::cout << "nMod:                     " << nMod << std::endl;
    std::cout << "nRealDiv:                 " << dRealDiv << std::endl;
    std::cout << "\n                        ";



    return 0;
}