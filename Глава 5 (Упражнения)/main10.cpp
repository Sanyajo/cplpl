#include <iostream>
#include <vector>

void inputVec(std::vector <double>& vec){

    std::string number;
    while(std::cin>>number) {
        if (number == "|") {
            break;
        }else if(stod(number) == 0) {
            throw ("Значение не может быть представленно как int ! \n");
        }else{
            double n = stod(number);
            vec.push_back(n);
            }
    }
}

std::vector <double> razn(std::vector <double>& vec){
    std::vector <double> vec1;
    for(int i = 0; i < vec.size()-1; ++i){
        vec1.push_back(vec[i+1] - vec[i]);
    }
    return vec1;
}

int main(){
    setlocale(LC_ALL,"RUS");

    std::vector <double> vec;
    double sum = 0;

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
    }else if(vec.size() == 0){
        std::cout<<"Вектор пустой !";
        return 1;
    }else{
        for (int i = 0; i <= N - 1; ++i) {
            sum += vec[i];
        }
    }

    if(N == 1){
        std::cout<<"Сумма "<<N<<" числа ( ";
        for(int i = 0; i <= N-1; ++i){
            std::cout<<vec[i]<<" ";
        }
        std::cout<<") равна "<<sum<<"\n";
    }
    else{
        std::cout<<"Сумма первых "<<N<<" чисел ( ";
        for(int i = 0; i <= N-1; ++i){
            std::cout<<vec[i]<<" ";
        }
        std::cout<<") равна "<<sum<<"\n";
    }

    std::vector <double> vec1 = razn(vec);
    std::cout<<"Вектор разностей: \n";
    for(auto i : vec1){
        std::cout<<i<<" ";
    }
    
    return 0;
}
