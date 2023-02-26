#include <iostream>
using namespace std;

template <typename T>
void Sum(T sum, T sum1, T n){
    int i=1;
    while(sum<n){
        if(i==1){
            sum+=1;
            //cout<<"В "<<i<<" клетке "<<sum<<" риса\n";
            sum1=1;
            i++;
        }
        else{
            sum1=sum1*2;
            //cout<<"В "<<i<<" клетке "<<sum1<<" риса\n";
            sum+=sum1;
            i++;
        }

    }
    cout<<"Для "<<n<<" зерен риса надо "<<i-1<<" клеток\n";
}

int main(){
    Sum(0,0,2147483647);
    Sum(0.0,0.0,1.7E+308);
    return 0;
}