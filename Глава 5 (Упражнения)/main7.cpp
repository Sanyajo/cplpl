
#include <iostream>
#include <math.h>

void discr(double a, double b, double c){
    double discriminant = pow(b,2) - (4*a*c);
    double x1 = NULL;
    double x2 = NULL;

    if(discriminant < 0 ){
        throw std::invalid_argument("discriminant < 0");
    }else if(discriminant == 0){
        x1 = (-1 * b) / (2 * a);
        std::cout<<x1;
    }else{
        x1 = ( (-1 * b) - sqrt(discriminant) ) / (2 * a);
        x2 = ( (-1 * b) + sqrt(discriminant) ) / (2 * a);
        std::cout<<"x1: "<<x1<<"\tx2: "<<x2;
    }
    
}

int main(){
    double a = 0, b = 0, c = 0;

    std::cout<<"Input a, b, c : ";
    std::cin>>a>>b>>c;

    try{
        discr(a,b,c);
    }catch (const char* msg){
        std::cerr<<msg;
    }
}