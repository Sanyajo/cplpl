#include <iostream>
int main(){
    float num=0;
    std::cout<<"Введите количество миль: \n";
    std::cin>>num;
    std::cout<<"В км/ч это: "<<(num*1.609);
    return 0;
}