#include <iostream>
using namespace std;
int main(){
    int val1=0, val2=0;
    bool check = false;

    cout<<"Введите 2 числа через enter: ";
    cin>>val1>>val2;

    if(val1>val2){
        check = true;
        cout<<val1<<" больше чем val2\n";
    }else{
        cout<<val2<<" больше чем val1\n";
    }

    cout<<"Сумма: "<<(val1+val2)<<"\n";

    if(check){cout<<"Разность: "<<(val1-val2)<<"\n";}
    else{cout<<"Разность: "<<(val2-val1)<<"\n";}

    cout<<"Произведение: "<<(val1*val2)<<"\n";

    if(check){ cout<<"Частное: "<<(val1/val2)<<"\n";}
    else{ cout<<"Частное: "<<(val2/val1)<<"\n";}

    return 0;
}