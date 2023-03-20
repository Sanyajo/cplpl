#include <iostream>
#include <vector>

int main(){
    int number = 0;
    int sum = 0;

    int N = 0;
    std::cout<<"Input N: ";
    std::cin>>N;

    if(N < 0){
        std::cerr<<"N < 0 !";
        return 1;
    }

    std::vector <int> vec;

    while(std::cin>>number){
        vec.push_back(number);
    }

    if(N > vec.size()){
        std::cerr<<"N > vec.size !";
        return 1;
    }else{
        for(int i=0; i <= N-1; ++i){
            sum += vec[i];
        }

        std::cout<<sum;

        return 0;
        }
}