#include <iostream>
#include <vector>

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
    int number = 0;
    int i = 1;
    bool check = true;
    while(i <= 4){
            std::cout<<"Введите "<<i<<" цифру числа: ";
            std::cin>>number;

            if(number <= 0 || number > 9){
                std::cerr<<"Не корректное число!\n";
            }else{
                for(auto j: vec){
                    if(j == number ){    //|| vec[j+1] == buf2 || vec[j-1] == buf2
                        check = false;
                    }
                }
                if(check){
                    vec.push_back(number);
                    i++;
                }else{
                    std::cerr<<"Данное число повторяется !\n";
                    check = true;
                }
            }
        }
}

int printRezult(std::vector <int>& vec1, std::vector <int> vec2, int& bull){
    int cow = 0;

    for(int i = 0; i < vec1.size(); ++i){
        for(int j = 0; j < vec2.size(); ++j){
            if(vec1[i] == vec2[j] && i == j){
                bull+=1;
            }
            if(vec1[i] == vec2[j] && i != j){
                cow+=1;
            }
        }
    }

    if(bull == 1 && cow == 1){
        std::cout<<bull<<" бык "<<cow<<" корова \n";

    }else if(cow == 0 && bull == 0){
        std::cout<<bull<<" быков "<<cow<<" коров \n";

    }
    else if(bull > 1 && cow > 1){
        std::cout<<bull<<" быка "<<cow<<" коровы \n";

    }else if(bull == 1 && cow > 1){
        std::cout<<bull<<" бык "<<cow<<" коровы \n";
    }else if(bull > 1 && cow == 1){
        std::cout<<bull<<" быка "<<cow<<" корова \n";

    }else if(bull > 1 && cow == 0){
        std::cout<<bull<<" быка "<<cow<<" коров \n";
    }else if(bull == 0 && cow > 1){
        std::cout<<bull<<" быков "<<cow<<" коровы \n";

    }else if(bull == 1 && cow == 0){
        std::cout<<bull<<" бык "<<cow<<" коров \n";
    }else if(bull == 0 && cow == 1){
        std::cout<<bull<<" быков "<<cow<<" корова \n";
    }

    return bull;
}

int main(){
    int bull = 0;
    std::vector <int> vec1;
    std::vector <int> vec2;

    randomVec(vec1);

    for(auto i : vec1){
        std::cout<<i<<" ";
    }
    std::cout<<"\n";

    while(bull != 4){
        bull = 0;
        vec2.clear();
        inputVec(vec2);
        printRezult(vec1,vec2,bull);
    }
    return 0;
}
