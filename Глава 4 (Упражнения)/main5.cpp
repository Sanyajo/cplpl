#include <iostream>
using namespace std;
int main(){

    double x1, x2;
    char ch =' ';

    cout<<"Введите два числа: ";
    cin>>x1>>x2;
    cout<<"Выберите действие: ";
    cin>>ch;

    switch (ch) {
        case '+':
            cout<<"Сумма "<<x1<<" и "<<x2<<" равна "<<(x1+x2)<<"\n";
            break;
        case '-':
        {
            string wybor;
            cout<<"Уменьшаемое x1?";
            cin>>wybor;
            if(wybor == "y")    cout<<"Разность "<<x1<<" и "<<x2<<" равна"<<(x1-x2)<<"\n";
            else    cout<<"Разность "<<x1<<" и "<<x2<<" равна"<<(x2-x1)<<"\n";
            break;
        }

        case '/':
        {
            string wybor;
            cout<<"Делимое x1?";
            cin>>wybor;
            if(wybor == "y")    cout<<"Деление "<<x1<<" и "<<x2<<" равно"<<(x1/x2)<<"\n";
            else    cout<<"Деление "<<x1<<" и "<<x2<<" равно"<<(x2/x1)<<"\n";
            break;
        }
        case '*':
            cout<<"Умножение "<<x1<<" и "<<x2<<" равно "<<(x1*x2)<<"\n";
            break;
    }
    return 0;
}