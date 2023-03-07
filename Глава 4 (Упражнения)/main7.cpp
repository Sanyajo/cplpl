#include <iostream>
#include <vector>
using namespace std;

bool transformation(bool& check,const string& str, int& x,const vector<string>& vec1){
    auto it = find(vec1.begin(),vec1.end(),str);

    if(it == vec1.end()){
        cout<<"\nЧисло: "<<str<<" некорректное!";
        check=false;
        return check;
    }
    else{
        for(int i=0;i<vec1.size();i++){
            if(str == vec1[i])    x=i;
        }
    }
}

void Calc(char ch, int x1, int x2) {

    switch (ch) {
        case '+': {
            cout << "Сумма " << x1 << " и " << x2 << " равна " << (x1 + x2) << "\n";
            break;
        }
        case '-': {
            string wybor;
            cout << "Уменьшаемое x1?";
            cin >> wybor;
            if (wybor == "y") cout << "Разность " << x1 << " и " << x2 << " равна " << (x1 - x2) << "\n";
            else cout << "Разность " << x1 << " и " << x2 << " равна " << (x2 - x1) << "\n";
            break;
        }

        case '/': {
            string wybor;
            cout << "Делимое x1?";
            cin >> wybor;
            if (wybor == "y") cout << "Деление " << x1 << " и " << x2 << " равно " << (x1 / x2) << "\n";
            else cout << "Деление " << x1 << " и " << x2 << " равно " << (x2 / x1) << "\n";
            break;
        }
        case '*': {
            cout << "Умножение " << x1 << " и " << x2 << " равно " << (x1 * x2) << "\n";
            break;
        }
        default:
            cout << "Некорректное действие";
            break;
    }
}

int main(){
    vector <string> vec1 ={"zero","one","two","three","four","five","six","seven","eight","nine"};
    string str_x1, str_x2;
    int x1,x2;
    cout<<"Введите числа: ";
    cin>>str_x1>>str_x2;

    bool check;

    transformation(check,str_x1,x1,vec1);
    transformation(check,str_x2,x2,vec1);

    if(!check)  return 0;


    while(true){
        char ch =' ';
        cout<<"\nВыберите действие: ";
        cin>>ch;

        if(ch == '0'){
            return 0;
        }else{
            Calc(ch, x1, x2);
        }
    }
}