#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void find_max(map <int, int>& mp, vector <int>& vec1, vector <int>& vec2){

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
    vector <int> vec={1,2,3,4,5,6,7,2,4,3,1};
    vector <int> vec1;
    map <int,int> mp;
    int k=0;

    for(int i: vec){
        for (int j : vec){
            if(i==j){
                k++;
            }
        }
        vec1.push_back(k);
        k=0;
    }

    find_max(mp,vec,vec1);

}