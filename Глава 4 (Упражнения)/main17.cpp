#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

void find_max(map <string, int>& mp, vector <string>& vec1, vector <int>& vec2){

    for(int i=0;i<vec1.size();i++){
        mp[vec1[i]]=vec2[i];
    }

    sort(vec2.begin(), vec2.end());

    auto pr = max_element(mp.begin(), mp.end(), [](const auto &x, const auto &y) {
        return x.second < y.second;
    });

    cout << "Мода: "<<pr->first << endl;

}

int main(){
    vector <string> vec1= {"Hello", "World", "Hello", "ps", "Alexandr"};
    vector <int> vec2;
    map <string,int> mp;
    int k=0;

    for(auto str: vec1){
        vec2.push_back(str.size());
    }

    int max = *max_element(vec2.begin(),vec2.end());
    cout<<"Максимальное значение: "<<max<<endl;

    int min = *min_element(vec2.begin(),vec2.end());
    cout<<"Минимальное значение: "<<min<<endl;

    vec2.clear();
    for(auto i: vec1){
        for (auto j : vec1){
            if(i==j){
                k++;
            }
        }
        vec2.push_back(k);
        k=0;
    }
    find_max(mp,vec1,vec2);
}