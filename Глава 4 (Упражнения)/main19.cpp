#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    multimap<int, string> mp;
    string name;
    int number;
    bool check = true;
    while (true) {
        cout << "Введите имя и кол баллов :";
        cin >> name;
        cin >> number;
        auto it = mp.begin();
        for(; it!= mp.end();it++){
            if(name == it->second)   {cout<<"Такое имя уже существует!\n"; check = false;}

        }

        if (name == "NoName" || number == 0) {
            break;
        } else if(check){
            mp.insert(make_pair(number, name));}
        else{
            continue;
        }
    }
    auto it = mp.begin();
    cout<<"Имя\t\t\tБаллы"<<endl;
    for(; it!=mp.end();it++){

        cout<<it->second<<"\t\t\t"<<it->first<<endl;
    }

}