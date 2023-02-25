#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector <string> vec ={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int num;
    cout<<"Введите число: ";
    cin>>num;
    cout<<"Число как строка: "<<vec[num]<<'\n';

    string str;
    cout<<"Введите строку: ";
    cin>>str;

    for(int i=0;i<vec.size();++i){
        if(str == vec[i]){
            cout<<"Строка как число: "<<i;
        }
    }
    return 0;
}