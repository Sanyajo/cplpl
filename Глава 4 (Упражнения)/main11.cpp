#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    bool check = true;

    for(int i=2;i<=100;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                check = false;
                break;
            }
        }
        if(check){
            vec.push_back(i);
        }
        check = true;
    }
        
    for(int i: vec){
        cout<<i<<" ";
    }

}