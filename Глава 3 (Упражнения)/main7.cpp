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

    string number;
    cout<<"Введите число: ";
    cin>>number;

    bool check = true;
    auto it = mp.begin();
    for(;it!=mp.end();++it){
         if(number==it->first){
             check = true;
             break;
         }
         else{ check=false;}
    }
    if(!check){
        cout<<"Я не знаю такого числа!\n";
    }else{
        cout<<"Число как строка: "<<mp[number];
    }
    //cout<<"Число как строка: "<<mp[number];
    return 0;
}