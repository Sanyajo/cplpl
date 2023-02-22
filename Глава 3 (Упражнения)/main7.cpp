#include <iostream>
#include <map>
using namespace std;
int main(){
    setlocale(LC_ALL,"RUS");
    map <string, int> mp;
    mp={{"один",1},
        {"два",2},
        {"три",3},
        {"четыре",4},
        {"пять",5}};

    int number;
    cout<<"Введите число: ";
    cin>>number;

    auto it = mp.begin();
    int k=1;
    for(;it!=mp.end();++it){
        if(number==it->second){
            cout<<"Число как строка: "<<it->first;
            k++;
            break;
        }
    }

    if(k==1){cout<<"Я не знаю такого числа!\n";}
    return 0;
}