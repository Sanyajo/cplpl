#include <iostream>
#include <vector>
#include <random>

void randomVec(std::vector <int>& vec){
    srand(time(NULL));

    int buf1 = rand()%9+1;
    int buf2 = rand()%9+1;

    vec.push_back(buf1);
    bool check = true;

    int i = 0;
    while(i < 3){
        for(int j = 0; j < vec.size(); j++){
            if(vec[j] == buf2 ){    //|| vec[j+1] == buf2 || vec[j-1] == buf2
                check = false;
            }
        }
        if(check){
          vec.push_back(buf2);
          i++;
        }else{
            buf2 = rand()%9+1;
            check = true;
        }
    }
}

void inputVec(std::vector <int>& vec){
    int number;
    int i = 1;
    bool check = true;
    while(i <= 4){
        std::cout<<"Введите "<<i<<" букву числа: ";
        std::cin>>number;
        for(int j = 0; j < vec.size(); j++){
            if(vec[j] == number ){    //|| vec[j+1] == buf2 || vec[j-1] == buf2
                check = false;
            }
        }
        if(check){
            vec.push_back(number);
            i++;
        }else{
            std::cout<<"Не корректная цифра !\n";
            check = true;
        }

    }
}

int main(){
    std::vector <int> vec1;
    std::vector <int> vec2;

    try{
        randomVec(vec1);
        inputVec(vec2);
    }catch (const char* msg){
        std::cerr<<msg;
    }

    for(auto i : vec1){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    for(auto i : vec2){
        std::cout<<i<<" ";
    }

}