#include <iostream>

double ctok(double c) {
    c = c + 273.15;
    if (c < 0)	throw("k<0");
    return c;
}

int main() {
    double c = 0;
    std::cin >> c;
    try {
        double k = ctok(c);
        std::cout << k;
    }
    catch (const char* msg) {
        std::cout << msg;
    }
    return 0;
}