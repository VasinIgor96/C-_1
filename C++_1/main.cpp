#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double mapScale, distanceCm;
    std::cout << "Обчислення відстані між населеними пунктами" << std::endl;
    std::cout << "Введіть вихідні дані:" << std::endl;
    std::cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) -> ";
    std::cin >> mapScale;
    std::cout << "Відстань між точками, які зображують населені пункти (см) -> ";
    std::cin >> distanceCm;

    double distanceKm = distanceCm / (mapScale * 100000);

    std::cout << "Відстань між населеними пунктами: " << distanceKm << " км." << std::endl;

    return 0;
}