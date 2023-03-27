#include <iostream>

double ctok(double c) {
    c = c + 273.15;
    if (c < 0)	throw std::invalid_argument("k<0");
    return c;
}

int main() {
    double c = 0;
    std::cin >> c;
    try {
        double k = ctok(c);
        std::cout << k;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what();
    }
    return 0;
}