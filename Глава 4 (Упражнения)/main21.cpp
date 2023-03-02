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
    cout<<"Введите кол баллов: ";
    cin>>number;
        for(; it!=mp.end();it++){
            if(number == it->first){
                cout<<it->second<<" ";
                k++;
            }
    }
        if(k==0){
            cout<<"Баллы не найдены!";
        }
}
