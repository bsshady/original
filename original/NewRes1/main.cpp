
#include <iostream>
#include <cmath>

int main()
{
    /*
    // Целочисленные типы
    short sh = 1; // 2 байта, -2^15...2^15-1
    unsigned short sh1 = 1; // 2 байта, 0...2^16-1

    int in = -1; // 4 байта, -2^31...2^31-1
    unsigned int in1 = 1; // 4 байта, 0...2^32-1

    long l = 1; // 8 байт, -2^31...2^31-1
    unsigned long ul = 1; // 8 байт, 0...2^32-1

    long long ll = 1; // 8 байт, -2^63...2^63-1
    unsigned long long ll1 = 1; // 8 байт, 0...2^64-1

    // Вещественные типы
    float f = 1; // 4 байта, 7 значащих цифр
    double d = 0.5; // 8 байт, 15 значащих цифр
    long double ld = 0.55; // 10 байт, 19 значащих цифр
    */

    unsigned long long radius;
    std::cin >> radius;
    double circle_leight;
    circle_leight = 2 * 3.14159 * radius;
    std::cout << circle_leight << std::endl;

    return 0;
}
