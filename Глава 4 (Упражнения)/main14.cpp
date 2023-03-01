#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    int max;
    cout<<"Input max: ";
    cin>>max;

    for(int i=1;i<max;++i){
        vec.push_back(i);
    }

    auto it = std::remove(vec.begin(), vec.end(), 1);
    vec.erase(it, vec.end());

    for(int j=2;j<max;j++){
        for(int i=j;i<max;i+=j){
            if(j==i){ continue;}
            else{
                auto it = std::remove(vec.begin(), vec.end(), i);
                vec.erase(it, vec.end());
                }
        }
    }

    for( int i: vec) {
        cout << i << " ";
    }
}