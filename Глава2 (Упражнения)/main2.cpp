#include <iostream>
#include <vector>
using namespace std;
int main(){
    setlocale(LC_ALL,"RUS");
    std::vector <std::string> vec = {"по коридору направо","вверх по лестнице","повернуть налево"};
    std::cout<<"Инструкция по поиску кабинета\n";
    for(auto i=1;i<=vec.size();++i){
        std::cout<<i<<" шаг: "<<vec[i-1]<<"\n";
    }
    return 0;
}