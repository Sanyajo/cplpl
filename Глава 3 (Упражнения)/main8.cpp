#include <iostream>
#include <vector>
using namespace std;
int main(){
    int y;
    int sum;
    vector <string> vec={"одноцентовых","пятицентовых","десятицентовых","двадцатицентовых","пятидесятицентовых"};
    vector <string> vec1={"одноцентовая","пятицентовая","десятицентовая","двадцатицентовая","пятидесятицентовая"};
    for(int i=0;i<vec.size();++i){
        cout<<"\nСколько у вас "<<vec[i]<<" монет?";
        cin>>y;
        if(y==1){cout<<"У вас "<<y<<" "<<vec1[i]<<" монета";}
        else{ cout<<"У вас "<<y<<" "<<vec[i]<<" монет";}
        sum+=y;
        if(i>vec.size()){break;}
    }
    if(sum%100>0){
        if(sum%100==1){ cout<<"\nОбщая стоимость "<<(sum/100)<<" долларов "<<(sum%100)<<" цент";}
        else{ cout<<"\nОбщая стоимость "<<(sum/100)<<" долларов "<<(sum%100)<<" цента";}
    }else{
        if(sum%100==1){cout<<"\nОбщая стоимость "<<(sum%100)<<" цент"<<endl;}
        else{cout<<"\nОбщая стоимость "<<(sum%100)<<" центов"<<endl;}
        }
}