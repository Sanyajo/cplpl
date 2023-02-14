#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL,"RUS");
    int a;
    cout<<"Введите a: ";
    cin>>a;
    if(a%2==0){
        cout<<"Число "<<a<<" является четным";
    }else{cout<<"Число "<<a<<" является нечетным";}
    return 0;
}