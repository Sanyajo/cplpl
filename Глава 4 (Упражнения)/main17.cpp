#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <string> vec= {"Hello", "World", "Hello", "ps", "Alexandr"};
    string  max;
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