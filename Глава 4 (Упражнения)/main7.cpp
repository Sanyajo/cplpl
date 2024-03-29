#include <iostream>
#include <vector>
using namespace std;

void change(const vector <string>& vecStr, string number, int& x){
    bool check = false;

    for(int i = 0; i<vecStr.size(); ++i){
        if(number == vecStr[i]){
            x = i;
            check = true;
        }
    }

    if(!check){
        x = stoi(number);//надо ли обрабатывать ошибку?
    }

    if(x > 9){
        throw (number);
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
    vector <string> vecStr = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    string number1, number2;
    cout<<"Введите числа: ";
    cin>>number1>>number2;

    int x1, x2;

    try{
        change(vecStr,number1,x1);
    }catch (string number){
        cout<<"Вылез из диапазона числа : "<<number<<"\n";
        return 1;
    }

    try{
        change(vecStr,number2,x2);
    }catch (string number){
        cout<<"Вылез из диапазона числа : "<<number<<"\n";
        return 1;
    }

    while(true){
        char ch =' ';
        cout<<"\nВыберите действие: ";
        cin>>ch;

        if(ch == '0'){
            break;
        }else{
            Calc(ch, x1, x2);
        }
    }
    return 0;
}