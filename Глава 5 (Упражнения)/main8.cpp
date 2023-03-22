#include <iostream>
#include <vector>

void inputVec(std::vector <int>& vec){
    //int i = std::numeric_limits<int>::max();
    std::string number;
    while(std::cin>>number) {
        if (number == "|") {
            break;
        }else if(stoi(number) == 0) { //!stoi(number)
            throw ("Значение не может быть представленно как int ! \n");
        }else{
            int n = stoi(number);
            vec.push_back(n);
            }
    }
}

int main(){
    setlocale(LC_ALL,"RUS");

    std::vector <int> vec;
    int sum = 0;

    int N = 0;
    std::cout<<"Введите количество суммируемых значений: \n";
    std::cin>>N;

    if(N < 0 || std::cin.fail()){
        std::cerr<<"Invalid N !";
        return 1;
    }

    std::cout<<"Введите несколько целых чисел ( | для окончания ввода) :\n";
    try{
        inputVec(vec);
    }catch(const char* msg){
        std::cerr<<msg;
    }

    if(N > vec.size()){
        std::cerr<<"N > vec.size !";
        return 1;
    }else {
        for (int i = 0; i <= N - 1; ++i) {
            sum += vec[i];
        }
    }

    if(N == 1){
        std::cout<<"Сумма "<<N<<" числа ( ";
        for(int i = 0; i <= N-1; ++i){
            std::cout<<vec[i]<<" ";
        }
        std::cout<<") равна "<<sum;
    }
    else{
        std::cout<<"Сумма первых "<<N<<" чисел ( ";
        for(int i = 0; i <= N-1; ++i){
            std::cout<<vec[i]<<" ";
        }
        std::cout<<") равна "<<sum;
    }

    return 0;
}
