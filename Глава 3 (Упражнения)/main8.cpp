#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main() {
    int y;
    double sum = 0;
    vector<string> vec = {"одноцентовых", "пятицентовых", "десятицентовых", "двадцатицентовых", "пятидесятицентовых"};
    vector<string> vec1 = {"одноцентовая", "пятицентовая", "десятицентовая", "двадцатицентовая", "пятидесятицентовая"};
    vector<double> cen = {0.01, 0.05, 0.1, 0.2, 0.5};

    for (int i = 0; i < vec.size(); ++i) {
        cout << "\nСколько у вас " << vec[i] << " монет?";
        cin >> y;
        if (y == 1) {
            cout << "У вас " << y <<" "<< vec1[i] << " монета";
            sum += (cen[i] * y);
        }
        else if (y == 2 || y == 3 || y == 4) {
            cout << "У вас " << y <<" "<< vec1[i] << " монеты";
            sum += (cen[i] * y);
        }
        else {
            cout << "У вас " << y << " " << vec[i] << " монет";
            sum += (cen[i] * y);
        }
    }



        if(fmod(sum,100.0)>0){
        if(fmod(sum,100.0)==1){ cout<<"\nОбщая стоимость "<<(sum/100)<<" долларов "<<fmod(sum,100.0)<<" цент";}
        else{ cout<<"\nОбщая стоимость "<<(sum/100.0)<<" долларов "<<fmod(sum,100.0)<<" цента";}
    }else{
        if(fmod(sum,100.0)==1){cout<<"\nОбщая стоимость "<<fmod(sum,100.0)<<" цент"<<endl;}
        else{cout<<"\nОбщая стоимость "<<fmod(sum,100.0)<<" центов"<<endl;}
    }


}