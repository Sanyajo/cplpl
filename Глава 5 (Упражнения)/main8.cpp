#include <iostream>
#include <vector>

int main(){
    setlocale(LC_ALL,"RUS");

    int number = 0;
    int sum = 0;

    int N = 0;
    std::cout<<"Введите количество суммируемых значений: \n";
    std::cin>>N;

    if(N < 0){
        std::cerr<<"N < 0 !";
        return 1;
    }

    std::vector <int> vec;

    std::cout<<"Введите несколько целых чисел ( | для окончания ввода) :\n";

    while(std::cin>>number){
        vec.push_back(number);
    }

    if(N > vec.size()){
        std::cerr<<"N > vec.size !";
        return 1;
    }else{
        for(int i = 0; i <= N-1; ++i){
            sum += vec[i];
        }

        std::cout<<"Сумма первых "<<N<<" чисел ( ";
        for(int i = 0; i <= N-1; ++i){
            std::cout<<vec[i]<<" ";
        }
        std::cout<<") равна "<<sum;

        return 0;
        }
}