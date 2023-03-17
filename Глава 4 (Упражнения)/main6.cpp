#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <string> vec ={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int num;
    cout<<"Введите число: ";
    cin>>num;

    if(num > 9 || num < 0){
        cout<<"Ввели недопустимое значение!!!";
        return 1;
    }
    else{
        cout<<"Число как строка: "<<vec[num]<<'\n';
    }

    string str;
    cout<<"Введите строку: ";
    cin>>str;

    bool check = false;
    for(int i=0;i<vec.size();++i){
        if(str == vec[i]){
            check = true;
            cout<<"Строка как число: "<<i;
        }
    }

    if(!check){
        cout<<"Ввели недопустимое значение!!!";
        return 1;
    }

    return 0;
}