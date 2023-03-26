#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

void funct(string day, string value,  map<string, vector<int>>& days,int valInt,int& rejected){
    while (cin >> day >> value) {
        if(stoi(value)){
            valInt = stoi(value);
        }else{
            throw exception();
        }

        if (day == "Mon" || day == "monday" || day == "Monday") {
            days["Monday"].push_back(valInt);
        } else if (day == "Tue" || day == "tuesday" || day == "Tuesday") {
            days["Tuesday"].push_back(valInt);
        } else if (day == "Wed" || day == "wednesday" || day == "Wednesday") {
            days["Wednesday"].push_back(valInt);
        } else if (day == "Thu" || day == "thursday" || day == "Thursday") {
            days["Thursday"].push_back(valInt);
        } else if (day == "Fri" || day == "friday" || day == "Friday") {
            days["Friday"].push_back(valInt);
        } else if (day == "Sat" || day == "saturday" || day == "Saturday") {
            days["Saturday"].push_back(valInt);
        } else if (day == "Sun" || day == "sunday" || day == "Sunday") {
            days["Sunday"].push_back(valInt);
        } else if (day == "s" || value == "1"){
            break;
        }else {
            rejected++;
        }
    }
}

int main()
{
    map<string, vector<int>> days;

    string day;
    string value;
    int valInt=0;
    int rejected = 0;
    std::cout<<"s 1 (для выхода из цикла)\n";
    try{
        funct(day,value,days,valInt,rejected);
    }catch(const exception& ex){
        cerr<<"Ввели не int \n";
    }

    for (auto& [day, values] : days) {
        cout << day << ": ";
        int sum = 0;
        for (auto& value : values) {
            cout << value << " ";
            sum += value;
        }
        cout << endl << "Cумма: " << sum << endl;
    }

    cout << "Отвергнутых значений: " << rejected << endl;

    return 0;
}