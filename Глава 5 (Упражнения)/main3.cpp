#include <iostream>

double ctok(double c) {
    c = c + 273.15;
    return c;
}

int main() {
    double c = 0;
    std::cin >> c;
    double k = ctok(c);
    if (k<0)    std::cerr<<"k<0";
    else{
        std::cout << k;
    }
    return 0;
}
