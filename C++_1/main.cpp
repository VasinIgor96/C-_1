#include <iostream>
#include <Windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double length, width, height;
    std::cout << "Обчислення об'єму паралелепіпеда" << std::endl;
    std::cout << "Введіть вихідні дані:" << std::endl;
    std::cout << "Довжина (см) -> ";
    std::cin >> length;
    std::cout << "Ширина (см) -> ";
    std::cin >> width;
    std::cout << "Висота (см) -> ";
    std::cin >> height;

    double volume = length * width * height;

    std::cout << "Об'єм: " << volume << " куб. см." << std::endl;
    
    return 0;
}
