#include <limits>
#include <iostream>
using namespace std;
template <typename T>

void Sum(T x){
    T j = 1, sum = 1, prev = 1;
    while (sum < x)
    {
        prev *= 2;
        sum += prev;
        j++;
    }
    cout<<"Для "<<" зерен риса надо "<<j<<" клеток\n";
}


int main() {
    int i = std::numeric_limits<int>::max();
    double d = std::numeric_limits<double>::max();
    Sum(i);
    Sum(d);
}