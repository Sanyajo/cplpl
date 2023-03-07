#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> ageVec;
    vector <string> nameVec;

    string name;
    int number;

    int k=0;
    bool proverka = true;
    while (true) {

        cout << "Введите имя и кол баллов :";
        cin >> name;
        cin >> number;

        for(string i : nameVec){
            if(i == name){
                cout<<"Такое имя уже существует\n"; proverka = false;
            }
        }

        if (name == "NoName" || number == 0) {
            break;
        } else if(proverka){
            nameVec.push_back(name);
            ageVec.push_back(number);
        }
        else{
            continue;
        }
    }

    cout<<"Введите кол баллов: ";
    cin>>number;
    bool check = false;

    for(int i=0;i<ageVec.size();++i){
        if(ageVec[i] == number){
            cout<<nameVec[i]<<endl;
        }
    }
    
    if(!check){
        cout<<"Баллы не найдены!";
    }
}