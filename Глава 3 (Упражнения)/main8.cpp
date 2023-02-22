#include <iostream>
#include <vector>
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
    cout<<endl;
    
    if( int(sum) == 1){
        if((int(sum*100))%2 == 1){
            cout<<"Общая стоимость "<<int(sum)<<" доллар "<<(int(sum*100))%100<<" цент";
        }
        else{
            cout<<"Общая стоимость "<<int(sum)<<" доллар "<<(int(sum*100))%100<<" цента";
        }
    } else if(int(sum) == 2 || int(sum) == 3 || int(sum) == 4){
        if((int(sum*100))%2 == 1){
            cout<<"Общая стоимость "<<int(sum)<<" доллара "<<(int(sum*100))%100<<" цент";
        }
        else{
            cout<<"Общая стоимость "<<int(sum)<<" доллара "<<(int(sum*100))%100<<" центов";
        }
    }else{
        cout<<"Общая стоимость "<<int(sum)<<" долларов "<<(int(sum*100))%100<<" центов";
    }
    
    return 0;

}