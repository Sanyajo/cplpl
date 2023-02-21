#include <iostream>
#include <vector>
using namespace std;

int main(){
    double y,sum=0;
    vector <double> vecSum;
    vector <double> vec;
    vector <double> vecSrSum;
    while(cin>>y){
        vec.push_back(y);
    }

    for(int i=0;i<vec.size();i++){
        for(int j=1+i;j<vec.size();j++){
            vecSum.push_back(vec[i]+vec[j]);
        }
    }

    for(int i=0;i<vecSum.size();i++){
        sum+=vecSum[i];
    }
    cout<<"Summa: "<<sum<<endl;


    for(int i=0;i<vec.size()-1;++i){
        vecSrSum.push_back((vec[i]+vec[i+1])/2);
    }

    sort(vec.begin(),vec.end());
    double min = vec[0];
    double max = vec[vec.size()-1];

    cout<<"Max S: "<<max<<"\n";
    cout<<"Min S: "<<min<<"\n";

    cout<<"Sredn S: ";
    for(int i=0;i<vecSrSum.size();++i){
        cout<<vecSrSum[i]<<" ";
    }
    return 0;
}