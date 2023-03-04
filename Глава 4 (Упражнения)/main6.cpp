#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector <string> vec ={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int num;
    cout<<"Введите число: ";
    cin>>num;
    if(num > 9)     {cout<<"Ввели недопустимое значение!!!"; return 1;}
    else    cout<<"Число как строка: "<<vec[num]<<'\n';

    string str;
    cout<<"Введите строку: ";
    cin>>str;

    int k = 0;
    for(int i=0;i<vec.size();++i){
        if(str == vec[i]){k++;}
    }

    if(k == 0){cout<<"Ввели недопустимое значение!!!"; return 1;}
    else{
        for(int i=0;i<vec.size();++i){
            if(str == vec[i]){
                cout<<"Строка как число: "<<i;
            }
        }
    }

    return 0;
}