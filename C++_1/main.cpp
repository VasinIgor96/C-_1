#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int year;
    std::cout << "Enter the year : ";
    std::cin >> year;

    int days = 365;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        days = 366;
    }

    std::cout << "In " << year << " year = " << days << " days" << std::endl;

    return 0;
}
