#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <string> vec1 ={"zero","one","two","three","four","five","six","seven","eight","nine"};
    vector <string> vec2 = {"0","1","2","3","4","5","6","7","8","9"};
    string str_x1, str_x2;
    int x1,x2;
    cout<<"Введите числа: ";
    cin>>str_x1>>str_x2;

    auto it1 = find(vec1.begin(),vec1.end(),str_x1);
    if(it1 == vec1.end()){
        for(int i=0;i<vec2.size();i++){
            if(str_x1 == vec2[i])    x1=i;
        }
    }
    else{
        for(int i=0;i<vec1.size();i++){
            if(str_x1 == vec1[i])    x1=i;
        }
    }

    auto it2 = find(vec1.begin(),vec1.end(),str_x2);
    if(it2 == vec1.end()){
        for(int i=0;i<vec2.size();i++){
            if(str_x2 == vec2[i])    x2=i;
        }
    }
    else{
        for(int i=0;i<vec1.size();i++){
            if(str_x2 == vec1[i])    x2=i;
        }
    }

    char ch =' ';
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
            if(wybor == "y")    cout<<"Разность "<<x1<<" и "<<x2<<" равна "<<(x1-x2)<<"\n";
            else    cout<<"Разность "<<x1<<" и "<<x2<<" равна "<<(x2-x1)<<"\n";
            break;
        }

        case '/':
        {
            string wybor;
            cout<<"Делимое x1?";
            cin>>wybor;
            if(wybor == "y")    cout<<"Деление "<<x1<<" и "<<x2<<" равно "<<(x1/x2)<<"\n";
            else    cout<<"Деление "<<x1<<" и "<<x2<<" равно "<<(x2/x1)<<"\n";
            break;
        }
        case '*':
            cout<<"Умножение "<<x1<<" и "<<x2<<" равно "<<(x1*x2)<<"\n";
            break;
    }
    
    return 0;
}