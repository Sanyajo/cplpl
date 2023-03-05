#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec={1,2,3,4,5,6,7,31};
    int max=0;
    int max_k=0;
    int k=0;

    for(int i=0; i<vec.size(); ++i){
        for (int j = i+1; j<vec.size(); ++j){
            if(vec[i] == vec[j]){
                k++;
            }
        }

        if( k > max_k ){
            max_k = k;
            max = vec[i];
        }
        k=0;
    }

    if(max_k == 0){
        cout<<"Моды нет";
    }
    else{
        cout<<"Мода: "<<max;
    }


}