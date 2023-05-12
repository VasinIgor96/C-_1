#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int hryvnia, kopiyka;
    std::cout << "Enter the amount in the format (UAH COP): ";
    std::cin >> hryvnia >> kopiyka;

    if (kopiyka >= 100) {
        int additionalHryvnia = kopiyka / 100;
        hryvnia += additionalHryvnia;
        kopiyka %= 100;
    }

    std::cout << "Adjusted amount: " << hryvnia << " UAH " << kopiyka << " COP " << std::endl;

    return 0;
}
