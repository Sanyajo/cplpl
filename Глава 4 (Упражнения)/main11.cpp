#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;

    for(int i=1;i<=100;++i){
        vec.push_back(i);
    }

    auto it = std::remove(vec.begin(), vec.end(), 1);
    vec.erase(it, vec.end());

    for(int i=1;i<=100;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                auto it = std::remove(vec.begin(), vec.end(), i);
                vec.erase(it, vec.end());
            }
        }
    }

    for( int i: vec) {
        cout << i << " ";
    }
}