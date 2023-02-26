#include <iostream>
#include <vector>
using namespace std;

void foo(string& str, int& x, vector<string>& vec1,vector<string> vec2){
    auto it = find(vec1.begin(),vec1.end(),str);
    if(it == vec1.end()){
        for(int i=0;i<vec2.size();i++){
            if(str == vec2[i])    x=i;
        }
    }
    else{
        for(int i=0;i<vec1.size();i++){
            if(str == vec1[i])    x=i;
        }
    }
}

void sw(char& ch, int& x1, int& x2, vector<string>& vec1, vector<string>& vec2){
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
}

int main(){
    vector <string> vec1 ={"zero","one","two","three","four","five","six","seven","eight","nine"};
    vector <string> vec2 = {"0","1","2","3","4","5","6","7","8","9"};
    string str_x1, str_x2;
    int x1,x2;
    cout<<"Введите числа: ";
    cin>>str_x1>>str_x2;

    foo(str_x1,x1,vec1,vec2);
    foo(str_x2,x2,vec1,vec2);

    while(true){
        char ch =' ';
        cout<<"Выберите действие: ";
        cin>>ch;

        if(ch == 'n'){
            return 0;
        }else{
            sw(ch,x1,x2,vec1,vec2);
        }
    }
}