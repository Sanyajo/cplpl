#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double a,b,c;
    double D=0, x1=0,x2=0;

    cout<<"Введите a: ";
    cin>>a;

    cout<<"Введите b: ";
    cin>>b;

    cout<<"Введите c: ";
    cin>>c;

    D = pow(b,2) - 4*a*c;

    if(D>0){
        x1= (-1*b + sqrt(D))/(2*a);
        x2= (-1*b - sqrt(D))/(2*a);
        cout<<x1<<" "<<x2;
    }

    if(int(D)==0){
        x1 = (-1*b) / (2*a);
        cout<<x1;
    }

    if(D<0){cout<<"Уравнение решений не имеет!!!";}
}