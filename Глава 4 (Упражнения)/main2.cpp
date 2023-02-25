#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec;

    for(int i;cin>>i;){
        vec.push_back(i);
    }

    for(int i: vec){
        cout<<i<<" ";
    }

    if(vec.size() %2 != 0){
        int i;
        cout<<"Введите дополнительное число: ";
        cin>>i;
        vec.push_back(i);
    }

    sort(vec.begin(),vec.end());
    cout<<"Медиана: "<<vec[vec.size()/2];

    return 0;
}