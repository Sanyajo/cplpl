#include <iostream>
#include <vector>
using namespace std;

int main(){
    double y;
   vector <double> vec;
    cout<<"Input arr: ";
   while(cin>>y){
       vec.push_back(y);
       if(vec.size()>=3){break;}
   }
   sort(vec.begin(),vec.end());

   for(int i=0;i<vec.size();i++){
       cout<<vec[i]<<" ";
   }

}