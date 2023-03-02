#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<int, string> mp;
    string name;
    int number;
    int k=0;
    bool proverka = true;
    while (true) {
        cout << "Введите имя и кол баллов :";
        cin >> name;
        cin >> number;
        auto it = mp.begin();
        for(; it!= mp.end();it++){
            if(name == it->second)   {cout<<"Такое имя уже существует!\n"; proverka = false;}

        }

        if (name == "NoName" || number == 0) {
            break;
        } else if(proverka){
            mp.insert(make_pair(number, name));}
        else{
            continue;
        }
    }

    auto it = mp.begin();
    cout<<"Введите имя: ";
    cin>>name;
        for(; it!=mp.end();it++){
            if(name == it->second){
                cout<<"У "<<name<<" "<<it->first<<" кол баллов";
                k++;
            }
    }
        if(k==0){
            cout<<"Такое имя не найдено!";
        }
}
